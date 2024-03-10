#include <iostream>
using namespace std;
int main()
{   
	int  M;
	cout<<"enter the marks  ";
	cin>>M;
	if(M>=80)
	{
		cout<<"A grade";
	}
	else
	if(M>=70)
	{
		cout<<"B grade";
	}
	else
	if(M>=60)
	{
		cout<<"C grade";
	}
	else
	if(M>=50)
	{
		cout<<"D grade";
	}
	else
	if(M>=40)
	{
		cout<<"F grade";
	}
	else
	{
		cout<<"Fail";
	}
	return 0;
}
