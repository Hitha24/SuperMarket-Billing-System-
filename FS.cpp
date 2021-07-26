#include<iostream>
#include<conio.h>
#include<fstream>
#include<string.h>
using namespace std;
class bill
{
    private:
    int code;
    float price,discount;
    string name;
    public:
    void WelcomeScreen(void) ;
    void Title(void);
    void LoginScreen(void);
    void menu();
    void admin();
    void customer();
    void add();
    void search();
    void Edit();
    void MainScreen(void);
    void del();
    void ex_it();
    void display();
    void list();
    void invoice();
};


/* **************************************  WELCOME SCREEN  ***************************************************** */
void bill:: WelcomeScreen(void)//function for welcome screen
{

    cout<<"\n\t\t\t\t\t\t\t\t****************************************************************************";
    cout<<"\n\t\t\t\t\t\t\t\t............................................................................";
    cout<<"\n\t\t\t\t\t\t\t\t|                                                                          |";
    cout<<"\n\t\t\t\t\t\t\t\t|                                                                          |";
    cout<<"\n\t\t\t\t\t\t\t\t|                               WELCOME TO                                 |";
    cout<<"\n\t\t\t\t\t\t\t\t|                                                                          |";
    cout<<"\n\t\t\t\t\t\t\t\t|                      SUPERMARKET BILLING SYSTEM                          |";
    cout<<"\n\t\t\t\t\t\t\t\t|                                                                          |";
    cout<<"\n\t\t\t\t\t\t\t\t|..........................................................................|";
    cout<<"\n\t\t\t\t\t\t\t\t****************************************************************************";
    cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t Press any key to continue......\n";
    getch();
    system("cls");//Use to clear screen
}


void bill::menu()
{
    p:
    system("cls");
    int choice;
    cout<<"\n**---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------**";
    cout<<"\n\t\t\t\t\t                                                    SUPERMARKET BILLING SYSTEM                                                                                               ";
    cout<<"\n**---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------**";
    cout<<"\n\t\t\t\t\t\t\t\t==================================================================================";
    cout<<"\n\t\t\t\t\t\t\t\t..................................................................................";
    cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t CONTROL PANEL ";
    cout<<"\n\t\t\t\t\t\t\t\t..................................................................................";
     cout<<"\n\t\t\t\t\t\t\t\t==================================================================================";
	cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t 1.ADMIN";
    cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t 2.CUSTOMER";
    cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t 3.EXIT";
    cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t Enter your choice :";
    cin>>choice;
    switch(choice)
    {
        case 1:LoginScreen();
            
        case 2:customer();
            
        case 3:ex_it();
               break;
        


        default:cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t Invalid Value";
    }
    getch();
    goto p;

}
void bill::ex_it()//function to exit
{
    system("cls");
     cout<<"\n\t\t\t\t\t\t\t\t==================================================================================";
    cout<<"\n\t\t\t\t\t\t\t\t..................................................................................";
    cout<<"\n\t\t\t\t\t\t\t\t\t\t\t   SUPERMARKET BILLING SYSTEM ";
    cout<<"\n\t\t\t\t\t\t\t\t..................................................................................";
     cout<<"\n\t\t\t\t\t\t\t\t==================================================================================";
    cout<<"\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t *** THANK YOU *** ";
    cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t        FOR";
    cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t      VISITING :)";
    getch();
}
void bill::admin()
{
    p:
    system("cls");
    int choice;
    cout<<"\n\t\t\t\t\t\t\t\t==================================================================================";
    cout<<"\n\t\t\t\t\t\t\t\t..................................................................................";
    cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t   ADMIN PANEL ";
    cout<<"\n\t\t\t\t\t\t\t\t..................................................................................";
     cout<<"\n\t\t\t\t\t\t\t\t==================================================================================";
    cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t 1.Add product";
    cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t 2.Search Product";
    cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t 3.Edit Product";
    cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t 4.Delete Product";
    cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t 5.Show Products";
    cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t 6.Go Back";
    cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t Enter your choice :";
    cin>>choice;
    switch(choice)
    {
        case 1:add();
                break;
        case 2:search();
                break;
        case 3:Edit();
                break;
        case 4:del();
                break;
        case 5:display();
                break;
        case 6:menu();
        default:cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t Invalid choice";
    }
    getch();
    goto p;
}
void bill::LoginScreen(void)//function for Login screen
{
    system("cls");
   
    //list of variables
    int e=0 ;
    char Username[15];
    char Password[15];
    char original_Username[15]="Admin";
    char original_Password[15]="2000";
    do
	{   cout<<"\n\t\t\t\t\t\t\t\t==================================================================================";
    cout<<"\n\t\t\t\t\t\t\t\t..................................................................................";
    cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t\tLOGIN ";
    cout<<"\n\t\t\t\t\t\t\t\t..................................................................................";
     cout<<"\n\t\t\t\t\t\t\t\t==================================================================================";
	    cout<<"\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t    ENTER YOUR USERNAME AND PASSWORD:  ";
        cout<<"\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t   USERNAME:  ";
        cin>>Username;
        cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t   PASSWORD:  ";
        cin>>Password;
        if(strcmp(Username,original_Username)==0 && strcmp(Password,original_Password)==0)
        {
        	cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t Login Successfull... :)";
        	getch();
            admin();
        	break;
		}
		else
		{
		    cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t Username or Password is incorrect... Try Again :)";
		    e++;
			getch();
	    }
	}while(e<=2);
    if(e>2)
    {
	    cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t You have crossed the limit. :) You cannot login. :)";
	    getch();
      
	   
    }
    system("cls");
}

void bill::customer()
{
    p:
    system("cls");
    int choice;
    cout<<"\n\t\t\t\t\t\t\t\t==================================================================================";
    cout<<"\n\t\t\t\t\t\t\t\t..................................................................................";
    cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\tCUSTOMER PANEL ";
    cout<<"\n\t\t\t\t\t\t\t\t..................................................................................";
     cout<<"\n\t\t\t\t\t\t\t\t==================================================================================";
    cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t 1.Sale Product";
    cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t 2.GO back";
    cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t Enter your choice :";
    cin>>choice;
    switch(choice)
    {
        case 1:invoice();
                break;
        case 2:menu();
        case 3:cout<<"\\n\n\t\t\t\t\t\t\t\t\t\t\t\t Invalid value";
    }
    getch();
    goto p;
}
void bill::add()
{
    p:
    system("cls");
    fstream file;
    int c,found=0;
    string n;
    float p,d;
    cout<<"\n\n\t\t\t\t\t\t\t\t\t\t.......................................................";
    cout<<"\n\n\t\t\t\t\t\t\t\t\t\t                   ADD NEW PRODUCT";
    cout<<"\n\n\t\t\t\t\t\t\t\t\t\t.......................................................";
    cout<<"\n\n\t\t\t\t\t\t\t\t\t\t Pr No\t\tName\t\tPrice\t\tDiscount\n";
    cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t Product Code:";
    cin>>code;
    cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t Name:";
    cin>>name;
    cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t Price:";
    cin>>price;
    cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t Discount in %:";
    cin>>discount;
    file.open("product.txt",ios::in);
    if(!file)
    {
        file.open("product.txt",ios::app|ios::out);
        file<<" "<<code<<" "<<name<<" "<<price<<" "<<" "<<discount<<"\n";
        file.close();
    }
    else
    {
        file>>c>>n>>p>>d;
        while(!file.eof())
        {
            if(c==code)
            {
             found++;
        }
            file>>c>>n>>p>>d;
        }
        file.close();
        if(found==1)
        goto p;
        else{
             file.open("product.txt",ios::app|ios::out);
        file<<" "<<code<<" "<<name<<" "<<price<<" "<<" "<<discount<<"\n";
        file.close();


        }

    }
    cout<<"\\n\n\t\t\t\t\t\t\t\t\t\t\t   Record Inserted Successfully....";
}

void bill::search()
{
    system("cls");
    fstream file;
    int p_c,found=0;
    cout<<"\n\n\t\t\t\t\t\t\t\t\t\t.......................................................";
    cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t SEARCH RECORD";
    cout<<"\n\n\t\t\t\t\t\t\t\t\t\t.......................................................";
    cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t Product Code:";
    cin>>p_c;
    file.open("product.txt",ios::in);
    if(!file)
    {
        cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t File Opening Error....";

    }
    else
    {
        file>>code>>name>>price>>discount;
        while(!file.eof())
        {
            if(p_c==code)
            {
                system("cls");
                cout<<"\n\n\t\t\t\t\t\t\t\t\t\t.....................................................";
                cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t SEARCHED RECORD ";
                cout<<"\n\n\t\t\t\t\t\t\t\t\t\t.....................................................";
                cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t Product code :"<<code;
                cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t Product name :"<<name;
                cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t Product Price :"<<price;
                cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t Discount :"<<discount<<"%";
                found++;

            }
             file>>code>>name>>price>>discount;
        }
        file.close();
        if(found==0)
        cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t Record cant found......";

    }
}
void bill::Edit()
{
     
    float p,d;
    system("cls");
    string n;
    int p_c,c,found=0;;
    fstream file,file1;
    cout<<"\n\n\t\t\t\t\t\t\t\t\t\t...............................................";
    cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t EDIT RECORD";
    cout<<"\n\n\t\t\t\t\t\t\t\t\t\t...............................................";
    cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t Product Code:";
    cin>>p_c;
    file.open("product.txt",ios::in);
    if(!file)
      {
        cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t File Opening Error....";

    }
    else
    {
        file1.open("product1.txt",ios::app|ios::out);
        file>>code>>name>>price>>discount;
        while(!file.eof())
        {
            if(p_c==code)
            {
               
                cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t Product New code :";
                cin>>c;
                cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t Product name :";
                cin>>n;
                cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t Product Price :";
                cin>>p;
                cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t Discount in % :";
                cin>>d;
                file1<<" "<<c<<" "<<n<<" "<<p<<" "<<d<<"\n";
                cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t   Record Edit Sucessfully...";
                found++;


            }
            else
            {
                file1<<" "<<code<<" "<<name<<" "<<price<<" "<<discount<<"\n";
            }
             file>>code>>name>>price>>discount;
        }
        file.close();
        file1.close();
        remove("product.txt");
        rename("product1.txt","product.txt");
        if(found==0)
        cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t Record cant found......";

    }
}
void bill::del()
{
    system("cls");
    int p_c,found=0;
    fstream file,file1;
    cout<<"\n\n\t\t\t\t\t\t\t\t\t\t.......................................................";
    cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t DELETE PRODUCT";
    cout<<"\n\n\t\t\t\t\t\t\t\t\t\t.......................................................";
    cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t Product code:";
    cin>>p_c;
    file.open("product.txt",ios::in);
    if(!file)
    {
        cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t file opening error.........";

    }
    else{
        file1.open("product1.txt",ios::app|ios::out);
        file>>code>>name>>price>>discount;
        while(!file.eof())
        {
            if(code==p_c)
            {
                cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t Product Deleted Successfully....";
                found++;
            }
            else{
              file1<<" "<<code<<" "<<name<<" "<<price<<" "<<discount<<"\n";  
            }
            file>>code>>name>>price>>discount;
        }
        file.close();
        file1.close();
        remove("product.txt");
        rename("product1.txt","product.txt");
        if(found==0)
        {
            cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t Record not found.......";
        }
    }
}
void bill::display()
{
    system("cls");
    fstream file;
    cout<<"\n\n\t\t\t\t\t\t\t\t\t\t.........................................................";
    cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t  SHOW PRODUCT";
    cout<<"\n\n\t\t\t\t\t\t\t\t\t\t.........................................................";
    file.open("product.txt",ios::in);

    if(!file)
    {
        cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t File opening error...........";
    }
    else{
        cout<<"\n\n\t\t\t\t\t\t\t\t\t\t Code\t\tName\t\tPrice\t\tDiscount %";
        file>>code>>name>>price>>discount;
        while(!file.eof())
        {
            cout<<"\n\n\t\t\t\t\t\t\t\t\t\t "<<code<<"\t\t"<<name<<"\t\t"<<price<<"\t\t"<<discount;
            file>>code>>name>>price>>discount;
        }
        file.close();

    }


}
void bill::list()
{
fstream file;
file.open("product.txt",ios::in);
cout<<"\n\n\t\t\t\t\t\t\t\t\t===========================================================\n";
cout<<"\n\n\t\t\t\t\t\t\t\t\t\t P.NO\t\t NAME \t\tPRICE\n";
cout<<"\n\n\t\t\t\t\t\t\t\t\t===========================================================\n";
file>>code>>name>>price>>discount;
while (!file.eof())
{
    cout<<"\n\n\t\t\t\t\t\t\t\t\t\t"<<code<<"\t\t"<<name<<"\t\t"<<price<<"\n";
     file>>code>>name>>price>>discount;
}
file.close();

}
void bill::invoice()
{
    system("cls");
    char choice;
    int o_c[50],o_q[50],c=0;
    fstream file;
    float amt=0,dis=0,total=0;
    cout<<"\n\n\t\t\t\t\t\t\t\t\t**********************************************************";
    cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t INVOICE GENERATOR";
    cout<<"\n\n\t\t\t\t\t\t\t\t\t**********************************************************";
    file.open("product.txt",ios::in);
if(!file)
{
    cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t database is empty...";
}
else{
    file.close();
    list();
    cout<<"\n\n\t\t\t\t\t\t\t\t\t=========================================================";
    cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t      PLACE YOUR ORDER ";
    cout<<"\n\n\t\t\t\t\t\t\t\t\t=========================================================\n";
    do
    {
        p:
        cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\tProduct Code:";
        cin>>o_c[c];
        cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\tProduct Quantity:";
        cin>>o_q[c];
        for(int i=0;i<c;i++)
        {
            if(o_c[c]==o_c[i])
            {
                cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t Duplicate Product Code...";
                goto p;
            }
        }
        c++;
        cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t Do you want add another product(Y/N):";
        cin>>choice;
    } while (choice=='Y'||choice=='y');
    system("cls");
    cout<<"\n\n\t\t\t\t\t\t\t\t\t***************************************INVOICE************************************\n";
    cout<<"\n\n\t\t\t\t\t\t\t\t\tPR.NO\t\tPR NAME\t\tQUANTITY \tPRICE\tAMOUNT\t AMOUNT(+DISCOUNT)\n";
    for(int i=0;i<c;i++)
    {
        file.open("product.txt",ios::in);
        file>>code>>name>>price>>discount;
        while(!file.eof())
        {
            if(code==o_c[i])
            {
                    amt=price*o_q[i];
                    dis=amt-(amt/100*discount);
                    total+=dis;
                    cout<<"\n\n\t\t\t\t\t\t\t\t\t"<<code<<"\t\t"<<name<<"\t\t"<<o_q[i] <<"\t\t"<<price<<"\t"<<amt<<"\t\t"<<dis; 
          }
                   file>>code>>name>>price>>discount;
        }
        file.close();
    }
    cout<<"\n\n\t\t\t\t\t\t\t\t\t=================================================================================";
    cout<<"\n\t\t\t\t\t\t\t\t\tTOTAL AMOUNT:"<<total;
    cout<<"\n\n\t\t\t\t\t\t\t\t\t=================================================================================";
}
}

main()
{
    bill b;
    b.WelcomeScreen();
    b.menu();
    
    
}
