#include<iostream>
using namespace std;

double sqrIt( double x)
{
	double result = sqrIt(x);
	//cout<<"square of a number is: "<<x*x<<endl;
	cout<<result;
}
int main()
{
	double a,b;
	cout<<"enter the value of a: ";
	cin>>a;
//	cout<<"enter the value of b: ";
//	cin>>b;

	sqrIt(a);
	return 0;
}
