using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

/** =========================================================

 Student First & Last Name:     
                                Ryan Beck
                                Jacob Brennecke
                                Brian Haule
                                Joe Kempenich
                                Danh Tran
                                
 
 Operating System:              Windows 10

 Microsoft Visual Studio:       Microsoft Visio Studio Community 2015

 Course:                        CIS 174

 Name Of homework Assignment:   Group Project

 Program Description:           This program calculates GPA.

 Academic Honesty:

 I attest that this is my original work.

 I have not used unauthorized source code, either modified or unmodified.

 I have not given other fellow student(s) access to my program.

=========================================================== **/
namespace GpaCalculator
{
    public partial class GpaCalculatorHome : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            UnobtrusiveValidationMode = System.Web.UI.UnobtrusiveValidationMode.None;
            Session.Remove("AccountID");
        }
    }
}