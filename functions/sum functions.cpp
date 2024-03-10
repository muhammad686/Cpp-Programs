#include<iostream>
using namespace std;

int add(int x, int y)
{
	return(x+y);
}
int main()
{
	int sum,a,b;
	cout<<"enter the value of a: ";
	cin>>a;
	cout<<"enter the value of b: ";
	cin>>b;
	sum= add(a,b);
	cout<<"sum: "<<sum;
	return 0 ;
}
