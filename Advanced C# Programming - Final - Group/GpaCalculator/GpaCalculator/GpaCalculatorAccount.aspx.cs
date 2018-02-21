using System;
using System.Collections.Generic;
using System.Data;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

namespace GpaCalculator
{

    
    public partial class GpaCalculatorAccount : System.Web.UI.Page
    {
        protected void saveClicked(object sender, EventArgs e)
        {
            if (PasswordTxtBx.Text == ConfirmPasswordTxtBx.Text)
            {
                AccountSource.UpdateParameters["AccountNameLast"].DefaultValue = LastNameTxtBx.Text;
                AccountSource.UpdateParameters["AccountNameFirst"].DefaultValue = FirstNameTxtBx.Text;
                AccountSource.UpdateParameters["AccountPassword"].DefaultValue = PasswordTxtBx.Text;
                try
                {
                    AccountSource.Update();
                    Label_welcome.Text = "Updated new information";
                } catch (Exception ex)
                {
                    lblError.Text = "A database error has occurred. Message: " + ex.Message;
                }
                
            }
        }
        protected void Page_Load(object sender, EventArgs e)
        {
            UnobtrusiveValidationMode = System.Web.UI.UnobtrusiveValidationMode.None;
            if (Session["AccountID"] != null && (int)Session["AccountID"] > 0)
            { 
                AccountSource.SelectCommand = ("SELECT * FROM [Account] WHERE ([AccountID] = @AccountID)");
                DataView dv = (DataView)AccountSource.Select(DataSourceSelectArguments.Empty);

                if (dv.Count > 0)
                {
                    string fName = ((string)dv[0].Row[2]).Replace(" ", ""),
                     lName = ((string)dv[0].Row[1]).Replace(" ", ""),
                     accEmail = ((string)dv[0].Row[3]).Replace(" ", ""),
                     accPass = ((string)dv[0].Row[4]).Replace(" ", "");

                    

                    Label_welcome.Text += " " + fName + " " + lName; // For now just output there ID number.
                    EmailAddressTxtBx.Attributes["value"] = accEmail;
                    FirstNameTxtBx.Attributes["value"] = fName;
                    LastNameTxtBx.Attributes["value"] = lName;
                    PasswordTxtBx.Attributes["value"] = accPass;
                    ConfirmPasswordTxtBx.Attributes["value"] = accPass;

                }
            else
                Response.Redirect("GpaCalculatorHome.aspx");
            }
            }

        protected void B_Logout_Click(object sender, EventArgs e)
        {
            Session["AccountID"] = 0;
            Response.Redirect("GpaCalculatorHome.aspx");
        }

        protected void AccountSource_Selected(object sender, SqlDataSourceStatusEventArgs e)
        {
            if (e.Exception != null)
            {
                lblError.Text = "A database error has occurred. Message: " + e.Exception.Message;
                e.ExceptionHandled = true;
            }
        }
    }
}