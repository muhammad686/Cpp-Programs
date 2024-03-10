#include<iostream>
using namespace std;

double findabs(double x)
{

    //return(x<0)?-x:x;
	if(x<0)
	x = -x;
	else
	x= x;
	cout<<"the absolute vaalue of x is : "<<x<<endl;
	
}
int main()
{
//	int a;
//	cout<<"enter the value of a: ";
//	cin>>a;
	findabs(123.1);
	findabs(-233);
	
	return 0;
}
