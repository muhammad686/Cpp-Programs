
#include<iostream>
#include<iomanip>
#include<fstream>
#include<conio.h>
#include<cstring>
#include<stdio.h>
#include<cstdlib>
#include<windows.h>
using namespace std;



struct employee
    {
      char name[40];
      int id;
      
    };
//////////////////////////////////////
//////function prototypes/////////////
//////////////////////////////////////
void gotoxy(short , short ); // 
void display();	// for record displaying
void add();
void search(employee emp[]);
void sort(employee emp[]);
void del(employee emp[]);
void modify(employee emp[]);


   
    struct employee emp[50];
    int n=0;
//////////////////////////////////////
///////////////////main///////////////
/////////////////////////////////////
int main()
 {
 char ch1;
   while (1)
     {
        system("cls");
	   
	   cout << setw( 25 ) << "-------------" << endl

          << setw( 25 ) << "| MAIN MENU |" << endl

          << setw( 25 ) << "-------------" << endl << endl

          << setw( 52 )

          << "Please choose one of the options below: "

          << endl << setw( 71 )

          << "--------------------------------------------------------------"

          << endl << endl

 

          << setw( 25 ) << "( A ) add record" << endl << endl

          << setw( 31 ) << "( O ) sort all records" << endl << endl

          << setw( 34 ) << "( S ) search for a record" << endl << endl

          << setw( 31 ) << "( D ) display a record" << endl << endl

          << setw( 32 ) << "( T ) delete / undelete" << endl << endl

          << setw( 28 ) << "( M ) update record" << endl << endl
         
		  << setw( 19 ) << "( Q ) Quit" << endl << endl
		  <<setw( 30 ) << "Enter Option      [ ]" << endl << endl;
			gotoxy(28,21);
		//	cin>>ch1;
	     
	   
	  
      
	   switch(getche())
	  //switch(ch1)
       {
         case 'a':
		 case 'A':add();break;
         
		 case 'd':
		 case 'D': display();break;
         
		 case 'S':
		 case 's':search(emp);break;
         
		 case 't':
		 case 'T':del(emp);break;
		 
		 case 'O':
		 case 'o':sort(emp);break;
         
		 case 'm':
		 case 'M':modify(emp);break;
		 
		 case 'q':
		 case 'Q':exit(0);break;
         default:
		puts("\n enter only from selection listed");
       } //end switch
     }//end while
    
	getch();
 }//end main

//////////////////////////////////////
///////////////////Display///////////////
/////////////////////////////////////

void display(void)
	{	
		system("cls");
		cout<< "in display function\n";
		cout<<setw(10)<<" Name:"<<setw(20)<<"Id:"<<endl;
		cout<<setw(10)<<"-------"<<setw(20)<<"----"<<endl;
		for(int i=0;i<n;i++)
			{
				cout<<setw(10)<<emp[i].name<<setw(20)<<emp[i].id<<endl;
			}
			
		cout<<"Press enter to goto main manu.....";
		getch();
			
	}
	

//////////////////////////////////////
///////////////////Add///////////////
/////////////////////////////////////
void add(void)
	{
		char ch;char id1[6];
		do
		{
			system("cls");
			cout<<endl;
			cout<< "in ADD function\n";
			cout<<"enter name:";    
			gets(emp[n].name);
			//cin.getline(emp[n].name,40);
			//cin.ignore(40,'\n');
			cout<<"eneter ID:";
			gets(id1);
			emp[n].id=atoi(id1);
			//cin.ignore();
			n++;
		cout<<"do you want to add more recors [y/n]";
		ch=getch();
		}
		while(ch!='n'&& ch!='N');
	}

//////////Search////////////////////
void search(employee emp[])
	{
		
     char ch,name[50];
     int l=0,id,i;
    
    do{
    	
    		system("cls");
    	 bool f=0;
    	cout<<"Presss I for by Id\nPress N for by name\n";
    	ch=getche();
    		if (ch == 'i' || ch == 'I')
		{
			system("cls");
			cout << "\nEnter the student ID to search: ";
			cin>>id;
			for (i = 0; i<n&&!f; i++)
			{
				if (emp[i].id == id)
					f = 1, l = i;

			}
			if(f)
			cout<<"\ndata found  at location   " << l + 1;
			else 
			cout<<"\nData does not found..";
			
	    }else if (ch == 'n' || ch == 'N')
	    {
	    	system("cls");
				cout << "enter the student name to search  =  ";
				gets(name);
				for (i = 0; i<n&&!f; i++)
				{
					if (strcmp(name, emp[i].name) == 0)
						f = 1, l = i;
				}
			if(f)
			cout<<"\ndata found  at location   " << l + 1;
			else 
			cout<<"\nData does not found..";
				
		}
		else
		{
		cout<<"Enter valid option...";
		continue;
		}
		
			cout << "\nDo u wana search more data Y/N :\n";
		ch = getche();
	} while (ch != 'n'&& ch != 'n');
	
	}

//////////sort///////////////////////
void sort(employee emp[])
	{
		employee a;
     char ch,name[50];
     int i,j, l=0,id;
    

    	
    		system("cls");
    	 bool f=0;
    	cout<<"Presss I for by Id\nPress N for by name\n";
    	ch=getche();
    		if (ch == 'i' || ch == 'I')
		{
			system("cls");
			for (i = 0; i<n - 1; i++)
				for (j = 0; j<n - 1; j++)
				{
					if (emp[j].id>emp[j + 1].id)
					{
						a = emp[j + 1];
						emp[j + 1] = emp[j];
						emp[j] = a;
					}
				}
				cout<<"\n Data sorted successfully By ID.\n";
			
	    }else if (ch == 'n' || ch == 'N')
	    {
	    for (i = 0; i<n - 1; i++)
					for (j = 0; j<n - 1; j++)
					{
						if (strcmp(emp[j].name, emp[j + 1].name)>0)
						{
							a = emp[j + 1];
							emp[j + 1] = emp[j];
							emp[j] = a;

						}
					}
 			cout<<"\nData is sorted successfully by name.\n";
				
		}
		else
		{
		cout<<"Enter valid option...";
	
		}
		
			cout << "\npress any key to continue:\n";
		ch = getche();


}
////////////Delete//////////////////////
void del(employee emp[])
	{
			system("cls");
		
			int id,i,l;
			bool f=0;
			char s,ID[40];
			do
			{
				f=0;
				cout << "enter the ID number to delete  =  ";
				gets(ID);
				id=atoi(ID);
				
				for (i = 0; i<n&&!f; i++)
				{
					if (emp[i].id == id)
						l = i, f = 1;
				}
				if (f == 0)
				{
					system("cls");
					cout << "\ndata does not exist";
				}
				else
				{
				
					for (i = l; i<n; i++)
						emp[i] = emp[i + 1];

					n--;
					cout << "\ndata deleted successfully";
				}

		cout << "\nDo u wana Delete more data Y/N :\n";
		s = getche();
	} while (s != 'n'&& s != 'n');	
		
	
	}

///////////Modify//////////////////////
void modify(employee emp[])
	{
			system("cls");
			int id,i,l;
			bool f=0;
			char s,ID[40];
			do
			{
				f=0;
				cout << "enter the ID to delete  =  ";
				gets(ID);
				id=atoi(ID);
				
				for (i = 0; i<n&&!f; i++)
				{
					if (emp[i].id == id)
						l = i, f = 1;
				}
				if (f == 0)
				{
					system("cls");
					cout << "\ndata does not exist";
				}
				else
				{
				cout<<"Enter New name : ";
			gets(emp[n].name);
					cout << "\ndata Modified successfully";
				}

		cout << "\nDo u wana Delete more data Y/N :\n";
		s = getche();
	} while (s != 'n'&& s != 'n');	
	
	}

////////////////////////////////////////
/////////////////gotoxy //////////////////////////
void gotoxy(short x, short y) 
{
COORD pos = {x, y};
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
//////////////////////////////////////////
