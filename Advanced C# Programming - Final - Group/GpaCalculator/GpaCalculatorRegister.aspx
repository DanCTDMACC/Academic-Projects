<%@ Page Language="C#" 
    MasterPageFile="/Master.Master"
    AutoEventWireup="true" 
    CodeBehind="GpaCalculatorRegister.aspx.cs" 
    Inherits="GpaCalculator.GpaCalculatorRegister" %>

<asp:Content 
    ID="contentHeader" 
    ContentPlaceHolderID="placeholderHeader"
    runat="server">
    <h2>Register</h2>
</asp:Content>

<asp:Content 
    ID="contentForm" 
    ContentPlaceHolderID="placeholderForm"
    runat="server">
    <form id="Form" 
		runat="server"> 
        <asp:SqlDataSource ID="AccountSource" runat="server" ConnectionString="<%$ ConnectionStrings:GradesConnectionString %>" InsertCommand="INSERT INTO Account (AccountNameLast, AccountNameFirst, AccountEmail, AccountPassword) VALUES (@AccountNameLast, @AccountNameFirst, @AccountEmail, @AccountPassword)">
            <InsertParameters>
                <asp:Parameter Name="AccountNameLast" />
                <asp:Parameter Name="AccountNameFirst" />
                <asp:Parameter Name="AccountEmail" />
                <asp:Parameter Name="AccountPassword" />
            </InsertParameters>
        </asp:SqlDataSource>
	    <asp:Label ID="FirstNameLabel" runat="server" Text="First Name:"></asp:Label>
	&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
        <asp:TextBox ID="FirstNameTxtBx" runat="server" Width="425px"></asp:TextBox>
        <asp:RequiredFieldValidator ID="RequiredFieldValidator1" runat="server" ControlToValidate="FirstNameTxtBx" Display="Dynamic" ErrorMessage="Required" ForeColor="Red"></asp:RequiredFieldValidator>
        <br />
        <br />
        <asp:Label ID="LastNameLabel" runat="server" Text="Last Name:   "></asp:Label>
        &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;
        <asp:TextBox ID="LastNameTxtBx" runat="server" Width="425px"></asp:TextBox>
        <asp:RequiredFieldValidator ID="RequiredFieldValidator2" runat="server" ControlToValidate="LastNameTxtBx" Display="Dynamic" ErrorMessage="Required" ForeColor="Red"></asp:RequiredFieldValidator>
        <br />
        <br />
        <br />
        <asp:Label ID="EmailAddressLabel" runat="server" Text="Email"></asp:Label>
        &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp;
        <asp:TextBox ID="EmailAddressTxtBx" runat="server" Width="425px"></asp:TextBox>
        <asp:RequiredFieldValidator ID="RequiredFieldValidator3" runat="server" ControlToValidate="EmailAddressTxtBx" Display="Dynamic" ErrorMessage="Required" ForeColor="Red"></asp:RequiredFieldValidator>
        <br />
        <br />
       
        <asp:Label ID="ConfirmEmailLabel" runat="server" Text="Confirm Email"></asp:Label>
        &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
       
        <asp:TextBox ID="ConfirmEmailTxtBx" runat="server" Width="425px"></asp:TextBox>
        <asp:RequiredFieldValidator ID="RequiredFieldValidator4" runat="server" ControlToValidate="ConfirmEmailTxtBx" Display="Dynamic" ErrorMessage="Required" ForeColor="Red"></asp:RequiredFieldValidator>
        <asp:CompareValidator ID="CompareValidator1" runat="server" ControlToCompare="EmailAddressTxtBx" ControlToValidate="ConfirmEmailTxtBx" ErrorMessage="Email not match" ForeColor="Red" Display="Dynamic"></asp:CompareValidator>
        <br />
        <br />
        <br />
        <asp:Label ID="PasswordLabel" runat="server" Text="Password"></asp:Label>
        &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
        <asp:TextBox ID="PasswordTxtBx" runat="server" TextMode="Password" Width="425px"></asp:TextBox>
        <asp:RequiredFieldValidator ID="RequiredFieldValidator5" runat="server" ControlToValidate="PasswordTxtBx" Display="Dynamic" ErrorMessage="Required" ForeColor="Red"></asp:RequiredFieldValidator>
        <br />
        <br />
        <asp:Label ID="ConfirmPasswordLabel" runat="server" Text="Confirm Password"></asp:Label>
        &nbsp;
        <asp:TextBox ID="ConfirmPasswordTxtBx" runat="server" TextMode="Password" Width="425px"></asp:TextBox>
        <asp:RequiredFieldValidator ID="RequiredFieldValidator6" runat="server" ControlToValidate="ConfirmPasswordTxtBx" Display="Dynamic" ErrorMessage="Required" ForeColor="Red"></asp:RequiredFieldValidator>
        <asp:CompareValidator ID="CompareValidator2" runat="server" ControlToCompare="PasswordTxtBx" ControlToValidate="ConfirmPasswordTxtBx" ErrorMessage="Password not match" ForeColor="Red" Display="Dynamic"></asp:CompareValidator>
        <br />
        <asp:Button ID="btnRegister" runat="server" OnClick="btnRegister_Click" Text="Register" />
        <asp:Button ID="btnReset" runat="server" Text="Reset" CausesValidation="False" OnClick="btnReset_Click" />
        <br />
        <asp:Label ID="lblError" runat="server"></asp:Label>
	</form>
</asp:Content>

<asp:Content 
    ID="contentFooter" 
    ContentPlaceHolderID="placeholderFooter"
    runat="server">
</asp:Content>  