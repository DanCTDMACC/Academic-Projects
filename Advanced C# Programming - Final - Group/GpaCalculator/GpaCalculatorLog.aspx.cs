using System;
using System.Collections.Generic;
using System.Data;
using System.Data.SqlClient;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

namespace GpaCalculator
{
    public partial class GpaCalculatorLog : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            UnobtrusiveValidationMode = System.Web.UI.UnobtrusiveValidationMode.None; // Turn off unobtrusive validation.
            InUser.Visible = false;
            InPass.Visible = false;
        }

        protected void Button_Login_Click(object sender, EventArgs e)
        {
            SqlDataSource1.SelectCommand = ("SELECT [AccountPassword], [AccountID], [AccountEmail] FROM [Account] WHERE ([AccountEmail] = @AccountEmail)"); // select the password of the matching email
            
            DataView dv = (DataView)SqlDataSource1.Select(DataSourceSelectArguments.Empty);

            if (dv.Count > 0)
            {

                string actualPass = (string)dv[0].Row[0];
                string enteredPass = TextBoxPassword.Text;

                if (enteredPass == actualPass.Replace(" ", ""))
                {
                    Session["AccountID"] = dv[0].Row[1]; // set the session state
                    Response.Redirect("~/GpaCalculatorGrades.aspx");
                }
                else
                {
                    InPass.Visible = true;
                }
            }
            else
            {
                InUser.Visible = true;
            }
        }

        protected void SqlDataSource1_Selected(object sender, SqlDataSourceStatusEventArgs e)
        {
            if (e.Exception != null)
            {
                lblError.Text = "A database error has occurred. Message: " + e.Exception.Message;
                e.ExceptionHandled = true;
            }
        }
    }
}