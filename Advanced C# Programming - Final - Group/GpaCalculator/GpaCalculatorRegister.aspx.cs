using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

namespace GpaCalculator
{
    public partial class GpaCalculatorRegister : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            UnobtrusiveValidationMode = System.Web.UI.UnobtrusiveValidationMode.None;
        }

        protected void btnReset_Click(object sender, EventArgs e)
        {
            LastNameTxtBx.Text = "";
            FirstNameTxtBx.Text = "";
            EmailAddressTxtBx.Text = "";
            ConfirmEmailTxtBx.Text = "";
            PasswordTxtBx.Text = "";
            ConfirmPasswordTxtBx.Text = "";
        }

        protected void btnRegister_Click(object sender, EventArgs e)
        {
            if (PasswordTxtBx.Text == ConfirmPasswordTxtBx.Text && EmailAddressTxtBx.Text == ConfirmEmailTxtBx.Text)
            {
                AccountSource.InsertParameters["AccountNameLast"].DefaultValue = LastNameTxtBx.Text;
                AccountSource.InsertParameters["AccountNameFirst"].DefaultValue = FirstNameTxtBx.Text;
                AccountSource.InsertParameters["AccountEmail"].DefaultValue = EmailAddressTxtBx.Text;
                AccountSource.InsertParameters["AccountPassword"].DefaultValue = PasswordTxtBx.Text;
                try
                {
                    AccountSource.Insert();
                    Response.Redirect("GpaCalculatorLog.aspx");

                }
                catch (Exception ex)
                {
                    lblError.Text = "A database error has occurred. Message: " + ex.Message;
                }
            }
        }
    }
}