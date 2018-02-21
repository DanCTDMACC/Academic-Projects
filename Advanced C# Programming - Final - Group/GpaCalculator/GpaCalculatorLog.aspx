<%@ Page Language="C#" 
    MasterPageFile="/Master.Master"
    AutoEventWireup="true" 
    CodeBehind="GpaCalculatorLog.aspx.cs" 
    Inherits="GpaCalculator.GpaCalculatorLog" %>

<asp:Content 
    ID="contentHeader" 
    ContentPlaceHolderID="placeholderHeader"
    runat="server">
    
    <h2>Login</h2>
</asp:Content>

<asp:Content 
    ID="contentForm" 
    ContentPlaceHolderID="placeholderForm"
    runat="server">
    <form id="Form" 
		runat="server">
       <table class="auto-style2">
            <tr>
                <td class="auto-style3">UserName:</td>
                <td class="auto-style5">
                    <asp:TextBox ID="TextBoxUserName" runat="server" Width="180px"></asp:TextBox>
                     <asp:Label ID ="InUser" runat="server" ForeColor ="Red">The username does not exist!</asp:Label>
                    <asp:RequiredFieldValidator ID="RequiredUserName" runat="server" ControlToValidate="TextBoxUserName" CssClass="auto-style7" ErrorMessage="Please enter User name" ForeColor="Red"></asp:RequiredFieldValidator>
                </td>
                <td class="auto-style7">&nbsp;</td>
            </tr>
            <tr>
                <td class="auto-style3">Password:</td>
                <td class="auto-style5">
                    <asp:TextBox ID="TextBoxPassword" runat="server" TextMode="Password" Width="180px"></asp:TextBox>
                    <asp:Label ID ="InPass" runat="server" ForeColor ="Red">The password is incorrect!</asp:Label>
                    <asp:RequiredFieldValidator ID="RequiredPassword" runat="server" ControlToValidate="TextBoxPassword" CssClass="auto-style8" ErrorMessage="Please enter Password" ForeColor="Red"></asp:RequiredFieldValidator>
                    
                </td>
                <td class="auto-style7">&nbsp;</td>
            </tr>
            <tr>
                <td class="auto-style4">&nbsp;</td>
                <td class="auto-style6">
                    <asp:Button ID="Button_Login" runat="server" CssClass="auto-style9" ForeColor="#00CC00" OnClick="Button_Login_Click" Text="Login" Width="171px" />
                </td>
                <td class="auto-style7">&nbsp;</td>
            </tr>
            <tr>
                <td class="auto-style4">&nbsp;</td>
                <asp:SqlDataSource ID="SqlDataSource1" runat="server" ConnectionString="<%$ ConnectionStrings:GradesConnectionString %>" SelectCommand="SELECT [AccountPassword], [AccountID], [AccountEmail] FROM [Account] WHERE ([AccountEmail] = @AccountEmail)" OnSelected="SqlDataSource1_Selected">
                    <SelectParameters>
                        <asp:ControlParameter ControlID="TextBoxUserName" DefaultValue="" Name="AccountEmail" PropertyName="Text" Type="String" />
                    </SelectParameters>
                </asp:SqlDataSource>
                <td class="auto-style8">&nbsp;</td>
                <td class="auto-style7">&nbsp;</td>
            </tr>
        </table>
        <asp:Label ID="lblError" runat="server"></asp:Label>
	</form>
</asp:Content>

<asp:Content 
    ID="contentFooter" 
    ContentPlaceHolderID="placeholderFooter"
    runat="server">
</asp:Content>  