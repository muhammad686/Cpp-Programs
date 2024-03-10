#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
/*	cout<<"programing is easy: ";
	getch();
	
	int a,b,c;
	a=1;b=3;c=5;
	cout<<a<<b<<c<<endl<<endl;
	c= a+b;
	cout<<c<<endl;
*/	
	////////////SWAPING OF VARIABLES/////////
	cout<<"before swaping\t\t"<<endl;
	int a =9, b= 2;
	cout<<a<<"\t\t"<<b<<"\n"<<endl;
	///////////after swaping////////////
	cout<<"after swaping\t\t"<<endl;
	a= a+b;
	b= a- b;
	a = a-b;
	cout<<a<<"\t\t"<<b<<"\t\t"<<endl;
	
	return 0;
}
