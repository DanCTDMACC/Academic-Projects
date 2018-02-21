<%@ Page Language="C#" 
    MasterPageFile="/Master.Master"
    AutoEventWireup="true" 
    CodeBehind="GpaCalculatorHome.aspx.cs" 
    Inherits="GpaCalculator.GpaCalculatorHome" %>

<asp:Content 
    ID="contentHeader" 
    ContentPlaceHolderID="placeholderHeader"
    runat="server">
    <h2>Home</h2>
</asp:Content>

<asp:Content 
    ID="contentForm" 
    ContentPlaceHolderID="placeholderForm"
    runat="server">
    <form id="Form" 
		runat="server">
        <img src="Images/HomeImage.png" />
	</form>
</asp:Content>

<asp:Content 
    ID="contentFooter" 
    ContentPlaceHolderID="placeholderFooter"
    runat="server">
</asp:Content>  