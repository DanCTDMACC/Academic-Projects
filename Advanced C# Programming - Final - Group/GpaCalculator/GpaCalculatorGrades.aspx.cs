using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

namespace GpaCalculator
{
    public partial class GpaCalculatorGrades : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            UnobtrusiveValidationMode = System.Web.UI.UnobtrusiveValidationMode.None;
        }

        // Event handler which handles database errors.
        // No concurrency error check due to no using optimistic concurrency.
        protected void GridView1_RowUpdated(object sender, GridViewUpdatedEventArgs e)
        {
            if (e.Exception != null)
            {
                lblError.Text = "A database error has occurred. Message: " + e.Exception.Message;
                e.ExceptionHandled = true;
                e.KeepInEditMode = true;
            }
            else
            {
                Server.Transfer("~/GpaCalculatorGrades.aspx");
            }
        }

        // Event handler which handles database errors.
        // No concurrency error check due to no using optimistic concurrency.
        protected void DetailsView1_ItemInserted(object sender, DetailsViewInsertedEventArgs e)
        {
            if (e.Exception != null)
            {
                lblError.Text = "A database error has occurred. Message: " + e.Exception.Message;
                e.ExceptionHandled = true;
                e.KeepInInsertMode = true;
            }
            else
            {
                Server.Transfer("~/GpaCalculatorGrades.aspx");
            }
        }

        protected void GridView1_RowDeleted(object sender, GridViewDeletedEventArgs e)
        {
            Server.Transfer("~/GpaCalculatorGrades.aspx");
        }
    }
}