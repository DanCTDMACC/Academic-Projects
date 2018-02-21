<%@ Page Language="C#" 
    MasterPageFile="/Master.Master"
    AutoEventWireup="true" 
    CodeBehind="GpaCalculatorAbout.aspx.cs" 
    Inherits="GpaCalculator.GpaCalculatorAbout" %>

<asp:Content 
    ID="contentHeader" 
    ContentPlaceHolderID="placeholderHeader"
    runat="server">
    <h2>About</h2>
</asp:Content>

<asp:Content 
    ID="contentForm" 
    ContentPlaceHolderID="placeholderForm"
    runat="server">
    <form id="Form" 
		runat="server"> 
			<h3>Group Project</h3> 
			<div class="form-group">
				<p>A group assignment for advanced C# at Des Moines Area Community College, The project is a GPA calculator. The program will accept a letter grade, and a number of credit hours. It will then display the grade point average.</p>
			</div>
			<h3>Group Members</h3>
            <div class =" form-group">    
				<label>Joe Kempenich - Project Manager</label>
			</div> 
			<div class =" form-group">
				<label>Ryan Beck - Developer</label>
			</div>
			<div class =" form-group"> 
				<label>Jacob Brennecke - Developer</label>
			</div>
			<div class =" form-group"> 
				<label>Brian Haule - Developer</label>
			</div>			
			
			<div class =" form-group"> 
				<label>Danh Tran - Developer</label>
			</div>
	</form>
</asp:Content>

<asp:Content 
    ID="contentFooter" 
    ContentPlaceHolderID="placeholderFooter"
    runat="server">
</asp:Content>  