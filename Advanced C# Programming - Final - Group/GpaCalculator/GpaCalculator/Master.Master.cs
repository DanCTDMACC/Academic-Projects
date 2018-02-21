using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

namespace GpaCalculator
{
    public partial class Master : System.Web.UI.MasterPage
    {

        protected void Page_Load(object sender, EventArgs e)

        { 
            if (Session["AccountID"] != null) // If logged in.
                {
                LoginLink.Visible = false;
                LogoutLink.Visible = true;
                AccountLink.Visible = true;
                RegisterLink.Visible = false;
                GradesLink.Visible = true;
                HomeLink.Visible = false;
            }
            else // If we are logged out.
            {
                LoginLink.Visible = true;
                AccountLink.Visible = false;
                LogoutLink.Visible = false;
                RegisterLink.Visible = true;
                GradesLink.Visible = false;
                HomeLink.Visible = true;
                
            }
            
        }
    }
}