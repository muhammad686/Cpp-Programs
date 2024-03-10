#include<iostream>
using namespace std;

double mult(double x,double y)
{

	cout<<"multiplication of two values are: "<<x*y<<endl;
}
int main()
{
	double a,b;
	cout<<"enter the value of a: ";
	cin>>a;
	cout<<"enter the value of b: ";
	cin>>b;
	
	mult(a,b);
	return 0;
}
