#include <iostream>
using namespace std;
int main()
{
	int a , b,x ;
	char opr;
	
	cout<<"a: ";
	cin>>a;
	cout<<"b: ";
    cin>>b;
    cout<<"operator: (+,-,/,%,*) "<<endl;
	cin>>opr;
	
	if(opr == '+')
	{
	
		cout<<a<<""<<'+'<<b<<""<<endl;
		cout<<a+b;
	}
	else
	if(opr == '*')
	{
	
		cout<<a<<""<<'*'<<b<<""<<endl;
		cout<<a*b;
	}
	else
	if(opr == '-')
	{
	
		cout<<a<<""<<'-'<<b<<""<<endl;
		cout<<a-b;
	}
	else
	if(opr == '/')
	{
	
		cout<<a<<""<<'/'<<b<<""<<endl;
		cout<<a/b;
	}
	else
	if(opr == '%')
	{
	
		cout<<a<<""<<'%'<<b<<""<<endl;
		cout<<a%b;
	}

	return 0;
}
