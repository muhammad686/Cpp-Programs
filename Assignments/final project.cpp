#include<iostream>
#include<iomanip>
#include<fstream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include <cstdlib>
#include <windows.h>
using namespace std;
//////////////////////////////////////
//////function prototypes/////////////
//////////////////////////////////////
void gotoxy(short , short );
void display();
void add();
void search();
void sort();
//void del();
void modify();

struct employee
    {
      char name[40];
      int id;
      int book_num;
      
    };
   
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

 

          << setw( 26 ) << "( A ) add record" << endl << endl

          << setw( 31 ) << "( O ) sort all records" << endl << endl

          << setw( 34 ) << "( S ) search for a record" << endl << endl

          << setw( 36 ) <<  "( D ) display a record" << endl << endl

         /* << setw( 46 ) << "( T ) delete / undelete book record" << endl << endl*/

          << setw( 35 ) << "( M ) update record" << endl << endl
         
		  << setw( 21 ) << "( Q ) Quit" << endl << endl
		  <<setw( 30 ) << "Enter Option      [ ]" << endl << endl;
			gotoxy(28,19);
		//	cin>>ch1;
	     
	   
	  
      
	   switch(getche())
	  //switch(ch1)
       {
         case 'a':
		 case 'A':add();break;
         
		 case 'd':
		 case 'D': display();break;
         
		 case 'S':
		 case 's':search();break;
         
		/* case 't':
		 case 'T':del();break;*/
		 
		 case 'O':
		 case 'o':sort();break;
         
		 case 'm':
		 case 'M':modify();break;
		 
		 case 'q':
		 case 'Q':exit(0);break;
         default:
		puts("\n\n \t\tSelect only from the given menu.....\n \t\tpress enter to to go to main menu......");
		getch();
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
		cout<<setw(10)<<" Name:"<<setw(20)<<"Id:"<<setw(30)<<"Enter  num"<<endl;
		cout<<setw(10)<<"-------"<<setw(20)<<"----"<<setw(30)<<"----"<<endl;
		for(int i=0;i<n;i++)
			{
				cout<<setw(10)<<emp[i].name<<setw(20)<<emp[i].id<<setw(30)<<emp[i].book_num<<endl;
			}
			cout<<"Press enter to goto main manu.....";
			getch();
			
	}
	

//////////////////////////////////////
///////////////////Add///////////////
/////////////////////////////////////
void add(void)
	{
		char ch;char id1[6];char book_num1[5];
		do
		{
			system("cls");
			cout<<endl;
			cout<< "in ADD function\n";
			cout<<"enter book name:";    
			gets(emp[n].name);
			//cin.getline(emp[n].name,40);
			//cin.ignore(40,'\n');
			cout<<"eneter ID:";
			gets(id1);
			emp[n].id=atoi(id1);
			cout<<"Enter book Num:";
			gets(book_num1);
			emp[n].book_num=atoi(book_num1);
			//cin.ignore();
			n++;
		cout<<"do you want to add more records [y/n]";
		ch=getch();
		}
		while(ch!='n'&& ch!='N');
	}

//////////Search////////////////////
void search(void)
	{
	
	system("cls");
			cout<<endl;
		char b1[5]; int i,loc,found; char b;
		cout<< "in SEARCH function\n";
		cout<<"Enter  num";
		gets(b1); 
		b=atoi(b1);
		for(i=0;i<n;i++)
		{
			if(emp[i].book_num==b)
			{
 				loc=i;
				found=1;
				break;
			}
			
		}
		if(found==1)
		{
			cout<<"Name:"<<emp[loc].name;
			cout<<"\n Id:"<<emp[loc].id;
			cout<<"\n num:"<<emp[loc].book_num;
		
		}
		else
		cout<<"Invalid choice";
		getch();
		
	}

//////////sort///////////////////////
void sort(void)
	{
		char book_num1[5]; char book_num; char i;
		cout<< "in SORT function\n";
		system("cls");
		
	/*	cout<<setw(10)<<" Name:"<<setw(20)<<"Id:"<<setw(30)<<"Enter book num"<<endl;
		cout<<setw(10)<<"-------"<<setw(20)<<"----"<<setw(30)<<"----"<<endl;
		for(int i=0;i<n;i++)
			{
				cout<<setw(10)<<emp[i].name<<setw(20)<<emp[i].id<<setw(30)<<emp[i].book_num<<endl;
			}
			cout<<"Enter roll num";
			gets(book_num1);
			book_num=atoi(book_num1);*/
		employee temp;
		cout<<"records are sorted here according to  number"<<endl;
     	for(i=0;i<n;i++)
     	{
     		
		 for(i=0;i<n-1;i++)
		 {
		 
     	if(emp[i].book_num>emp[i+1].book_num)
     	{
     		temp=emp[i];
     		emp[i]=emp[i+1];
     		emp[i+1]=temp;
     		
		 }
		 
	}
} 
cout<<"Data sorted\n";
     for(int i=0; i<n; i++)
	{
	/*	cout << emp[i].name; cout<<"\t\t";			// Prints student name
					
		cout<< emp[i].id;cout<<"\t";	// Prints student number
						
		cout << emp[i].book_num << endl;		// Prints GPA*/
		cout<<emp[i].book_num<<" ";
	}
getch();
	}

////////////Delete//////////////////////
/*void del(void)
	{
		system("cls");
			cout<<endl;
		cout<< "in DELETE function\n";
		 
			char b1[5]; int i,loc,found; char b;
		//cout<< "in SEARCH function\n";
		cout<<"Enter book num";
		gets(b1); 
		b=atoi(b1);
		for(i=0;i<n;i++)
		{
			if(emp[i].book_num==b)
			{
				loc=i;
				found=1;
				break;
			}
			
		}
		if(found==1)
		{
		
			
			/*cout<<"Name:"<<emp[loc].name;
			cout<<"\n Id:"<<emp[loc].id;
			cout<<"\n book num:"<<emp[loc].book_num;
			
		}
		else
		cout<<"invalid choice";
		
		for(i=loc;i<n-2;i++)
		{
		 strcmp(emp[i].name,emp[i+1].name);
			emp[i].id=emp[i+1].id;
			emp[i].book_num=emp[i+1].book_num;
			cout<<"\n The new name:"<<emp[i+1].name;
			cout<<"\n The new id:"<<emp[i+1].id;
			cout<<"\n The new book num:"<<emp[i+1].book_num;
		}
		
		
		getch();
	}*/
	

///////////Modify//////////////////////
void modify(void)
	{
		   	char id1[5];char book_num1[4];
		cout<< "in MODIFY function\n";
		system("cls");
			cout<<endl;
		char b1[5]; int i,loc,found; char b;
		//cout<< "in SEARCH function\n";
		cout<<"Enter book num";
		gets(b1); 
		b=atoi(b1);
		for(i=0;i<n;i++)
		{
			if(emp[i].book_num==b)
			{
				loc=i;
				found=1;
				break;
			}
			
		}
		if(found==1)
		{
			cout<<"Name:"<<emp[loc].name;
			cout<<"\n Id:"<<emp[loc].id;
			cout<<"\n book num:"<<emp[loc].book_num;
			//strcpy(emp[loc].name,)
					cout<<"enter name:";    
			gets(emp[loc].name);
			//cin.getline(emp[n].name,40);
			//cin.ignore(40,'\n');
			cout<<"eneter ID:";
			gets(id1);
			emp[loc].id=atoi(id1);
			cout<<"Enter book Num:";
			gets(book_num1);
			emp[loc].book_num=atoi(book_num1);
			
			
		}
		else
		cout<<"invalid choice";
		getch();
	}

////////////////////////////////////////
/////////////////gotoxy //////////////////////////
void gotoxy(short x, short y) 
{
COORD pos = {x, y};
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
//////////////////////////////////////////

