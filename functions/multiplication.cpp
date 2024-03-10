#include<iostream>
#include<cmath>
using namespace std;

//void mult(int, int);

int mult(int x, int y)
{

	return(x*y);
}
int main()
{
	int a,b, multiple;
	cout<<"enter the value for a: ";
	cin>>a;
	cout<<"enter the value for b: ";
	cin>>b;
	
	multiple = mult(a,b);
	cout<<"multiplication of given numberes are: "<<multiple<<endl;
	

	return 0;
}
