<%@ Page Language="C#" 
    MasterPageFile="/Master.Master"
    AutoEventWireup="true" 
    CodeBehind="GpaCalculatorAccount.aspx.cs" 
    Inherits="GpaCalculator.GpaCalculatorAccount" %>

<asp:Content 
    ID="contentHeader" 
    ContentPlaceHolderID="placeholderHeader"
    runat="server">
    <h2>Account</h2>
</asp:Content>

<asp:Content 
    ID="contentForm" 
    ContentPlaceHolderID="placeholderForm"
    runat="server">
   
    <form id="Form" 
		runat="server">
         <div>
    
        <asp:Label ID="Label_welcome" runat="server" Text="Welcome to GPA Calculator"></asp:Label>
        <br />
    
             <asp:SqlDataSource ID="AccountSource" runat="server" ConnectionString="<%$ ConnectionStrings:GradesConnectionString %>" UpdateCommand="UPDATE Account SET AccountNameLast = @AccountNameLast, AccountNameFirst = @AccountNameFirst, AccountPassWord = @AccountPassword WHERE [AccountID] = @AccountID" SelectCommand="SELECT * FROM [Account] WHERE ([AccountID] = @AccountID)" OnSelected="AccountSource_Selected">
                 <SelectParameters>
                     <asp:SessionParameter DefaultValue="0" Name="AccountID" SessionField="AccountID" Type="Int32" />
                 </SelectParameters>
                 <UpdateParameters>
                     <asp:Parameter Name="AccountNameLast" />
                     <asp:Parameter Name="AccountNameFirst" />
                     <asp:Parameter Name="AccountPassword" />
                     <asp:SessionParameter DefaultValue="0" Name="AccountID" SessionField="AccountID" Type="Int32" />
                 </UpdateParameters>
             </asp:SqlDataSource>
    
    </div>
	
    
        <asp:Label ID="EmailAddressLabel" runat="server" Text="Email"></asp:Label>
        &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp;
        <asp:TextBox ID="EmailAddressTxtBx" runat="server" Width="429px" ReadOnly="True"></asp:TextBox>
        <br />
        <br />
	    <asp:Label ID="FirstNameLabel" runat="server" Text="First Name:"></asp:Label>
	&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
        <asp:TextBox ID="FirstNameTxtBx" runat="server" Width="425px"></asp:TextBox>
         <asp:RequiredFieldValidator ID="RequiredFieldValidator1" runat="server" ControlToValidate="FirstNameTxtBx" Display="Dynamic" ErrorMessage="Required" ForeColor="Red" ValidationGroup="SaveButton"></asp:RequiredFieldValidator>
        <br />
        <br />
        <asp:Label ID="LastNameLabel" runat="server" Text="Last Name:   "></asp:Label>
        &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;<asp:TextBox ID="LastNameTxtBx" runat="server" Width="425px"></asp:TextBox>
         <asp:RequiredFieldValidator ID="RequiredFieldValidator2" runat="server" ControlToValidate="LastNameTxtBx" Display="Dynamic" ErrorMessage="Required" ForeColor="Red" ValidationGroup="SaveButton"></asp:RequiredFieldValidator>
        <br />
        <br />
        <asp:Label ID="PasswordLabel" runat="server" Text="Password"></asp:Label>
        &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
        <asp:TextBox ID="PasswordTxtBx" TextMode="Password" runat="server" Width="425px"></asp:TextBox>
         <asp:RequiredFieldValidator ID="RequiredFieldValidator3" runat="server" ControlToValidate="PasswordTxtBx" Display="Dynamic" ErrorMessage="Required" ForeColor="Red" ValidationGroup="SaveButton"></asp:RequiredFieldValidator>
        <br />
        <br />
        <asp:Label ID="ConfirmPasswordLabel" runat="server" Text="Confirm Password"></asp:Label>
        &nbsp;
        <asp:TextBox ID="ConfirmPasswordTxtBx" TextMode="Password" runat="server" Width="425px"></asp:TextBox>
         <asp:RequiredFieldValidator ID="RequiredFieldValidator4" runat="server" ControlToValidate="ConfirmPasswordTxtBx" Display="Dynamic" ErrorMessage="Required" ForeColor="Red" ValidationGroup="SaveButton"></asp:RequiredFieldValidator>
         <asp:CompareValidator ID="CompareValidator1" runat="server" ControlToCompare="PasswordTxtBx" ControlToValidate="ConfirmPasswordTxtBx" Display="Dynamic" ErrorMessage="Password not match" ForeColor="Red" ValidationGroup="SaveButton"></asp:CompareValidator>
        <br />
        <br />
        <asp:Button ID="SaveButton" runat="server" Text="Save" Width="84px" OnClick="saveClicked" ValidationGroup="SaveButton" />
        <br />
        <asp:Label ID="lblError" runat="server"></asp:Label>
	</form>


</asp:Content>

<asp:Content 
    ID="contentFooter" 
    ContentPlaceHolderID="placeholderFooter"
    runat="server">
</asp:Content>  