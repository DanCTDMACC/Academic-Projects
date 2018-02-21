<%@ Page Language="C#" 
    MasterPageFile="/Master.Master"
    AutoEventWireup="true" 
    CodeBehind="GpaCalculatorGrades.aspx.cs" 
    Inherits="GpaCalculator.GpaCalculatorGrades" %>

<asp:Content 
    ID="contentHeader" 
    ContentPlaceHolderID="placeholderHeader"
    runat="server">
    <h2>Grades</h2>
</asp:Content>

<asp:Content 
    ID="contentForm" 
    ContentPlaceHolderID="placeholderForm"
    runat="server">
    <form id="Form" 
		runat="server">
        <asp:DetailsView ID="DetailsView2" runat="server" AutoGenerateRows="False" BorderStyle="None" DataSourceID="SqlDataSource11" Height="74px" Width="328px" Font-Size="Large">
            <Fields>
                <asp:BoundField DataField="Column1" HeaderText="Column1" ReadOnly="True" ShowHeader="False" SortExpression="Column1" />
            </Fields>
            <RowStyle BackColor="White" />
        </asp:DetailsView>
        <asp:SqlDataSource ID="SqlDataSource11" runat="server" ConnectionString="<%$ ConnectionStrings:GradesConnectionString %>" SelectCommand="SELECT ('Grade list for ' + AccountNameFirst + ' ' + AccountNameLast) FROM Account WHERE AccountID = @AccountID">
            <SelectParameters>
                <asp:SessionParameter Name="AccountID" SessionField="AccountID" />
            </SelectParameters>
        </asp:SqlDataSource>
        <asp:Label ID="Label8" runat="server" Text="From Year" CssClass ="whiteBack"></asp:Label>
	    <asp:DropDownList ID="ddlStartYear" runat="server" AutoPostBack="True" DataSourceID="SqlDataSource1" DataTextField="GradesYear" DataValueField="GradesYear">
        </asp:DropDownList>
        <asp:SqlDataSource ID="SqlDataSource1" runat="server" ConnectionString="<%$ ConnectionStrings:GradesConnectionString %>" SelectCommand="SELECT DISTINCT [GradesYear] FROM [Grades] WHERE ([GradesAccountID] = @GradesAccountID) ORDER BY [GradesYear]">
            <SelectParameters>
                <asp:SessionParameter Name="GradesAccountID" SessionField="AccountID" Type="Int32" />
            </SelectParameters>
        </asp:SqlDataSource>
        <asp:Label ID="Label9" runat="server" Text="Semester" CssClass ="whiteBack"></asp:Label>
        <asp:DropDownList ID="ddlStartSemester" runat="server" AutoPostBack="True" DataSourceID="SqlDataSource2" DataTextField="SemesterName" DataValueField="SemesterID">
        </asp:DropDownList>
        <asp:SqlDataSource ID="SqlDataSource2" runat="server" ConnectionString="<%$ ConnectionStrings:GradesConnectionString %>" SelectCommand="SELECT DISTINCT [SemesterID], [SemesterName] FROM [GradesSemesterGradeType] WHERE (([GradesAccountID] = @GradesAccountID) AND ([GradesYear] = @GradesYear)) ORDER BY [SemesterID]">
            <SelectParameters>
                <asp:SessionParameter Name="GradesAccountID" SessionField="AccountID" Type="Int32" />
                <asp:ControlParameter ControlID="ddlStartYear" Name="GradesYear" PropertyName="SelectedValue" Type="Int32" />
            </SelectParameters>
        </asp:SqlDataSource>
        <asp:Label ID="Label6" runat="server" Text="To Year" CssClass ="whiteBack"></asp:Label>
        <asp:DropDownList ID="ddlEndYear" runat="server" AutoPostBack="True" DataSourceID="SqlDataSource3" DataTextField="GradesYear" DataValueField="GradesYear">
        </asp:DropDownList>
        <asp:SqlDataSource ID="SqlDataSource3" runat="server" ConnectionString="<%$ ConnectionStrings:GradesConnectionString %>" SelectCommand="SELECT DISTINCT [GradesYear] FROM [Grades] WHERE ([GradesAccountID] = @GradesAccountID) ORDER BY [GradesYear] DESC">
            <SelectParameters>
                <asp:SessionParameter Name="GradesAccountID" SessionField="AccountID" Type="Int32" />
            </SelectParameters>
        </asp:SqlDataSource>
        <asp:Label ID="Label7" runat="server" Text="Semester" CssClass ="whiteBack"></asp:Label>
        <asp:DropDownList ID="ddlEndSemester" runat="server" AutoPostBack="True" DataSourceID="SqlDataSource4" DataTextField="SemesterName" DataValueField="SemesterID">
        </asp:DropDownList>
	    <asp:SqlDataSource ID="SqlDataSource4" runat="server" ConnectionString="<%$ ConnectionStrings:GradesConnectionString %>" SelectCommand="SELECT DISTINCT [SemesterID], [SemesterName] FROM [GradesSemesterGradeType] WHERE (([GradesAccountID] = @GradesAccountID) AND ([GradesYear] = @GradesYear)) ORDER BY [SemesterID] DESC">
            <SelectParameters>
                <asp:SessionParameter Name="GradesAccountID" SessionField="AccountID" Type="Int32" />
                <asp:ControlParameter ControlID="ddlEndYear" Name="GradesYear" PropertyName="SelectedValue" Type="Int32" />
            </SelectParameters>
        </asp:SqlDataSource>
        <asp:GridView ID="GridView1" runat="server" AutoGenerateColumns="False" DataKeyNames="GradesID" DataSourceID="SqlDataSource5" OnRowDeleted="GridView1_RowDeleted" OnRowUpdated="GridView1_RowUpdated">
            <Columns>
                <asp:TemplateField HeaderText="Year" SortExpression="GradesYear">
                    <EditItemTemplate>
                        <asp:TextBox ID="txtEditYear" runat="server" Text='<%# Bind("GradesYear") %>'></asp:TextBox>
                        <asp:RequiredFieldValidator ID="RequiredFieldValidator1" runat="server" ControlToValidate="txtEditYear" Display="Dynamic" ErrorMessage="Year cannot be empty" ForeColor="Red" ValidationGroup="Edit">*</asp:RequiredFieldValidator>
                        <asp:RegularExpressionValidator ID="regexpName1" runat="server"     
                                    ErrorMessage="The Year is not a valid year in the range of 1900 - 2099." 
                                    ControlToValidate="txtEditYear" Display="Dynamic" ForeColor="Red" ValidationGroup="Edit"     
                                    ValidationExpression="^(19|20)\d{2}$" Text="*" />                 
                    </EditItemTemplate>
                    <ItemTemplate>
                        <asp:Label ID="Label3" runat="server" Text='<%# Bind("GradesYear") %>'></asp:Label>
                    </ItemTemplate>
                </asp:TemplateField>
                <asp:TemplateField HeaderText="Semester" SortExpression="GradesSemesterID">
                    <EditItemTemplate>
                        <asp:DropDownList ID="ddlEditSemester" runat="server" DataSourceID="SqlDataSource6" DataTextField="SemesterName" DataValueField="SemesterID" SelectedValue='<%# Bind("GradesSemesterID") %>'>
                        </asp:DropDownList>
                    </EditItemTemplate>
                    <ItemTemplate>
                        <asp:Label ID="Label1" runat="server" Text='<%# Bind("SemesterName") %>'></asp:Label>
                    </ItemTemplate>
                </asp:TemplateField>
                <asp:TemplateField HeaderText="Class" SortExpression="GradesClass">
                    <EditItemTemplate>
                        <asp:TextBox ID="txtEditClass" runat="server" Text='<%# Bind("GradesClass") %>'></asp:TextBox>
                        <asp:RequiredFieldValidator ID="RequiredFieldValidator2" runat="server" ControlToValidate="txtEditClass" Display="Dynamic" ErrorMessage="Class cannot be empty" ForeColor="Red" ValidationGroup="Edit">*</asp:RequiredFieldValidator>
                    </EditItemTemplate>
                    <ItemTemplate>
                        <asp:Label ID="Label4" runat="server" Text='<%# Bind("GradesClass") %>'></asp:Label>
                    </ItemTemplate>
                </asp:TemplateField>
                <asp:TemplateField HeaderText="Credits" SortExpression="GradesCredit">
                    <EditItemTemplate>
                        <asp:TextBox ID="txtEditCredits" runat="server" Text='<%# Bind("GradesCredit") %>'></asp:TextBox>
                        <asp:RequiredFieldValidator ID="RequiredFieldValidator3" runat="server" ControlToValidate="txtEditCredits" Display="Dynamic" ErrorMessage="Credits cannot be empty" ForeColor="Red" ValidationGroup="Edit">*</asp:RequiredFieldValidator>
                        <asp:RegularExpressionValidator ID="regexpName3" runat="server"     
                                    ErrorMessage="The credits are not a valid number 0 - 6." 
                                    ControlToValidate="txtEditCredits" Display="Dynamic" ForeColor="Red" ValidationGroup="Edit"     
                                    ValidationExpression="^[0-6]$" Text="*" />  
                    </EditItemTemplate>
                    <ItemTemplate>
                        <asp:Label ID="Label5" runat="server" Text='<%# Bind("GradesCredit") %>'></asp:Label>
                    </ItemTemplate>
                </asp:TemplateField>
                <asp:TemplateField HeaderText="Grade" SortExpression="GradeTypeLetter">
                    <EditItemTemplate>
                        <asp:DropDownList ID="ddlEditGrade" runat="server" DataSourceID="SqlDataSource7" DataTextField="GradeTypeLetter" DataValueField="GradeTypeID" SelectedValue='<%# Bind("GradesGradeTypeID") %>'>
                        </asp:DropDownList>
                    </EditItemTemplate>
                    <ItemTemplate>
                        <asp:Label ID="Label2" runat="server" Text='<%# Bind("GradeTypeLetter") %>'></asp:Label>
                    </ItemTemplate>
                </asp:TemplateField>
                <asp:CommandField ShowEditButton="True" ValidationGroup="Edit" />
                <asp:CommandField ShowDeleteButton="True" />
            </Columns>
            <HeaderStyle BackColor="#CCCCCC" />
            <RowStyle BackColor="White" />
        </asp:GridView>
	    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
        <asp:DetailsView ID="DetailsView3" runat="server" AutoGenerateRows="False" DataSourceID="SqlDataSource12" Height="50px" Width="125px">
            <Fields>
                <asp:BoundField DataField="Column1" HeaderText="GPA" ReadOnly="True" SortExpression="Column1" />
            </Fields>
            <RowStyle BackColor="White" />
        </asp:DetailsView>
        <br />
        <asp:ValidationSummary ID="ValidationSummary1" runat="server" HeaderText="Please fix these errors" ValidationGroup="Edit" ForeColor="Yellow" />
        <asp:SqlDataSource ID="SqlDataSource12" runat="server" ConnectionString="<%$ ConnectionStrings:GradesConnectionString %>" SelectCommand="SELECT ROUND((SUM(GradesCredit * GradeTypePointIndex) / SUM(GradesCredit)), 2) FROM Grades, GradeTypes WHERE ((GradesGradeTypeID = GradeTypeID) AND (GradesAccountID = @GradesAccountID) AND (GradesYear * 10 + GradesSemesterID &gt;= @GradesYear * 10 + @GradesSemesterID) AND (GradesYear * 10 + GradesSemesterID &lt;= @GradesYear2 * 10 + @GradesSemesterID2))">
            <SelectParameters>
                <asp:SessionParameter Name="GradesAccountID" SessionField="AccountID" />
                <asp:ControlParameter ControlID="ddlStartYear" Name="GradesYear" PropertyName="SelectedValue" />
                <asp:ControlParameter ControlID="ddlStartSemester" Name="GradesSemesterID" PropertyName="SelectedValue" />
                <asp:ControlParameter ControlID="ddlEndYear" Name="GradesYear2" PropertyName="SelectedValue" />
                <asp:ControlParameter ControlID="ddlEndSemester" Name="GradesSemesterID2" PropertyName="SelectedValue" />
            </SelectParameters>
        </asp:SqlDataSource>
        <asp:SqlDataSource ID="SqlDataSource5" runat="server" ConnectionString="<%$ ConnectionStrings:GradesConnectionString %>" InsertCommand="INSERT INTO [Grades] ([GradesAccountID], [GradesYear], [GradesSemesterID], [GradesClass], [GradesGradeTypeID], [GradesCredit]) VALUES (@GradesAccountID, @GradesYear, @GradesSemesterID, @GradesClass, @GradesGradeTypeID, @GradesCredit)" SelectCommand="SELECT GradesID, GradesYear, GradesClass, GradesCredit, GradesSemesterID, SemesterName, GradesGradeTypeID, GradeTypeLetter, GradeTypePointIndex FROM Grades, Semesters, GradeTypes WHERE ((GradesSemesterID = SemesterID) AND (GradesGradeTypeID = GradeTypeID) AND (GradesAccountID = @GradesAccountID) AND (GradesYear * 10 + GradesSemesterID &gt;= @GradesYear * 10 + @GradesSemesterID) AND (GradesYear * 10 + GradesSemesterID &lt;= @GradesYear2 * 10 + @GradesSemesterID2)) ORDER BY GradesYear, GradesSemesterID, GradesClass" UpdateCommand="UPDATE Grades SET GradesYear = @GradesYear, GradesSemesterID = @GradesSemesterID, GradesClass = @GradesClass, GradesCredit = @GradesCredit, GradesGradeTypeID = @GradesGradeTypeID WHERE GradesID = @GradesID" DeleteCommand="DELETE FROM Grades WHERE GradesID = @GradesID">
            <DeleteParameters>
                <asp:Parameter Name="GradesID" />
            </DeleteParameters>
            <SelectParameters>
                <asp:SessionParameter Name="GradesAccountID" SessionField="AccountID" Type="Int32" />
                <asp:ControlParameter ControlID="ddlStartYear" Name="GradesYear" PropertyName="SelectedValue" Type="Int32" />
                <asp:ControlParameter ControlID="ddlStartSemester" Name="GradesSemesterID" PropertyName="SelectedValue" Type="Int32" />
                <asp:ControlParameter ControlID="ddlEndYear" Name="GradesYear2" PropertyName="SelectedValue" Type="Int32" />
                <asp:ControlParameter ControlID="ddlEndSemester" Name="GradesSemesterID2" PropertyName="SelectedValue" Type="Int32" />
            </SelectParameters>
            <UpdateParameters>
                <asp:Parameter Name="GradesYear" />
                <asp:Parameter Name="GradesSemesterID" />
                <asp:Parameter Name="GradesClass" />
                <asp:Parameter Name="GradesCredit" />
                <asp:Parameter Name="GradesGradeTypeID" />
                <asp:Parameter Name="GradesID" />
            </UpdateParameters>
        </asp:SqlDataSource>
        <asp:SqlDataSource ID="SqlDataSource6" runat="server" ConnectionString="<%$ ConnectionStrings:GradesConnectionString %>" SelectCommand="SELECT * FROM [Semesters]"></asp:SqlDataSource>
        <asp:SqlDataSource ID="SqlDataSource7" runat="server" ConnectionString="<%$ ConnectionStrings:GradesConnectionString %>" SelectCommand="SELECT * FROM [GradeTypes] ORDER BY [GradeTypeID]"></asp:SqlDataSource>
	    <br />
	    <label>Add New Grades</label>
        <br />
        <asp:DetailsView ID="DetailsView1" runat="server" AutoGenerateRows="False" DataKeyNames="GradesID" DataSourceID="SqlDataSource8" DefaultMode="Insert" Height="50px" Width="318px" OnItemInserted="DetailsView1_ItemInserted">
            <Fields>
                <asp:TemplateField HeaderText="Year" SortExpression="GradesYear">
                    <EditItemTemplate>
                        <asp:TextBox ID="TextBox3" runat="server" Text='<%# Bind("GradesYear") %>'></asp:TextBox>
                    </EditItemTemplate>
                    <InsertItemTemplate>
                        <asp:TextBox ID="txtInsertYear" runat="server" Text='<%# Bind("GradesYear") %>'></asp:TextBox>
                        <asp:RequiredFieldValidator ID="RequiredFieldValidator4" runat="server" ControlToValidate="txtInsertYear" Display="Dynamic" ErrorMessage="Year cannot be empty" ForeColor="Red" ValidationGroup="Insert">*</asp:RequiredFieldValidator>
                        <asp:RegularExpressionValidator ID="regexpName4" runat="server"     
                                    ErrorMessage="The Year is not a valid year in the range of 1900 - 2099." 
                                    ControlToValidate="txtInsertYear" Display="Dynamic" ForeColor="Red" ValidationGroup="Insert"       
                                    ValidationExpression="^(19|20)\d{2}$" Text="*" />     
                    </InsertItemTemplate>
                    <ItemTemplate>
                        <asp:Label ID="Label3" runat="server" Text='<%# Bind("GradesYear") %>'></asp:Label>
                    </ItemTemplate>
                </asp:TemplateField>
                <asp:TemplateField HeaderText="Semester" SortExpression="GradesSemesterID">
                    <EditItemTemplate>
                        <asp:TextBox ID="TextBox1" runat="server" Text='<%# Bind("GradesSemesterID") %>'></asp:TextBox>
                    </EditItemTemplate>
                    <InsertItemTemplate>
                        <asp:DropDownList ID="ddlInsertSemester" runat="server" DataSourceID="SqlDataSource9" DataTextField="SemesterName" DataValueField="SemesterID" SelectedValue='<%# Bind("GradesSemesterID") %>'>
                        </asp:DropDownList>
                    </InsertItemTemplate>
                    <ItemTemplate>
                        <asp:Label ID="Label1" runat="server" Text='<%# Bind("GradesSemesterID") %>'></asp:Label>
                    </ItemTemplate>
                </asp:TemplateField>
                <asp:TemplateField HeaderText="Class" SortExpression="GradesClass">
                    <EditItemTemplate>
                        <asp:TextBox ID="TextBox4" runat="server" Text='<%# Bind("GradesClass") %>'></asp:TextBox>
                    </EditItemTemplate>
                    <InsertItemTemplate>
                        <asp:TextBox ID="txtInsertClass" runat="server" Text='<%# Bind("GradesClass") %>'></asp:TextBox>
                        <asp:RequiredFieldValidator ID="RequiredFieldValidator5" runat="server" ControlToValidate="txtInsertClass" Display="Dynamic" ErrorMessage="Class cannot be empty" ForeColor="Red" ValidationGroup="Insert">*</asp:RequiredFieldValidator>
                    </InsertItemTemplate>
                    <ItemTemplate>
                        <asp:Label ID="Label4" runat="server" Text='<%# Bind("GradesClass") %>'></asp:Label>
                    </ItemTemplate>
                </asp:TemplateField>
                <asp:TemplateField HeaderText="Credits" SortExpression="GradesCredit">
                    <EditItemTemplate>
                        <asp:TextBox ID="TextBox5" runat="server" Text='<%# Bind("GradesCredit") %>'></asp:TextBox>
                    </EditItemTemplate>
                    <InsertItemTemplate>
                        <asp:TextBox ID="txtInsertCredits" runat="server" Text='<%# Bind("GradesCredit") %>'></asp:TextBox>
                        <asp:RequiredFieldValidator ID="RequiredFieldValidator6" runat="server" ControlToValidate="txtInsertCredits" Display="Dynamic" ErrorMessage="Credits cannot be empty" ForeColor="Red" ValidationGroup="Insert">*</asp:RequiredFieldValidator>
                        <asp:RegularExpressionValidator ID="regexpName6" runat="server"     
                                    ErrorMessage="The credits are not a valid number 0 - 6." 
                                    ControlToValidate="txtInsertCredits" Display="Dynamic" ForeColor="Red" ValidationGroup="Insert"        
                                    ValidationExpression="^[0-6]$" Text="*" />  
                    </InsertItemTemplate>
                    <ItemTemplate>
                        <asp:Label ID="Label5" runat="server" Text='<%# Bind("GradesCredit") %>'></asp:Label>
                    </ItemTemplate>
                </asp:TemplateField>
                <asp:TemplateField HeaderText="Grade" SortExpression="GradesGradeTypeID">
                    <EditItemTemplate>
                        <asp:TextBox ID="TextBox2" runat="server" Text='<%# Bind("GradesGradeTypeID") %>'></asp:TextBox>
                    </EditItemTemplate>
                    <InsertItemTemplate>
                        <asp:DropDownList ID="DropDownList1" runat="server" DataSourceID="SqlDataSource10" DataTextField="GradeTypeLetter" DataValueField="GradeTypeID" SelectedValue='<%# Bind("GradesGradeTypeID") %>'>
                        </asp:DropDownList>
                    </InsertItemTemplate>
                    <ItemTemplate>
                        <asp:Label ID="Label2" runat="server" Text='<%# Bind("GradesGradeTypeID") %>'></asp:Label>
                    </ItemTemplate>
                </asp:TemplateField>
                <asp:CommandField InsertText="Add New Grade" ShowInsertButton="True" ButtonType="Button" ValidationGroup="Insert" />
            </Fields>
            <HeaderStyle BackColor="#CCCCCC" />
            <RowStyle BackColor="White" />
        </asp:DetailsView>
        <asp:SqlDataSource ID="SqlDataSource8" runat="server" ConnectionString="<%$ ConnectionStrings:GradesConnectionString %>" InsertCommand="INSERT INTO [Grades] ([GradesAccountID], [GradesYear], [GradesSemesterID], [GradesClass], [GradesGradeTypeID], [GradesCredit]) VALUES (@GradesAccountID, @GradesYear, @GradesSemesterID, @GradesClass, @GradesGradeTypeID, @GradesCredit)" SelectCommand="SELECT * FROM Grades">   
            <InsertParameters>
                <asp:SessionParameter Name="GradesAccountID" SessionField="AccountID" Type="Int32" />
                <asp:Parameter Name="GradesYear" Type="Int32" />
                <asp:Parameter Name="GradesSemesterID" Type="Int32" />
                <asp:Parameter Name="GradesClass" Type="String" />
                <asp:Parameter Name="GradesGradeTypeID" Type="Int32" />
                <asp:Parameter Name="GradesCredit" Type="Int32" />
            </InsertParameters>
        </asp:SqlDataSource>
	    <asp:SqlDataSource ID="SqlDataSource9" runat="server" ConnectionString="<%$ ConnectionStrings:GradesConnectionString %>" SelectCommand="SELECT * FROM [Semesters] ORDER BY [SemesterID]"></asp:SqlDataSource>
        <asp:SqlDataSource ID="SqlDataSource10" runat="server" ConnectionString="<%$ ConnectionStrings:GradesConnectionString %>" SelectCommand="SELECT * FROM [GradeTypes] ORDER BY [GradeTypeID]"></asp:SqlDataSource>
	    <asp:Label ID="lblError" runat="server"></asp:Label>
	    <asp:ValidationSummary ID="ValidationSummary2" runat="server" HeaderText="Please fix these errors" ValidationGroup="Insert" ForeColor="#FFFF99" />
	</form>
</asp:Content>

<asp:Content 
    ID="contentFooter" 
    ContentPlaceHolderID="placeholderFooter"
    runat="server">
</asp:Content>  