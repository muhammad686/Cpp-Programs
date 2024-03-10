//call by pointer
#include<iostream>
using namespace std;

void name(int, int);

int main()
{
	int a, b;
	cout<<"enter the value of a: ";
	cin>>a;
	cout<<"enter the value of b: ";
	cin>>b;
	name(&a,&b);

	return 0;
}
void name(int *x, int *y)
{
	*x = *x+8;
	*y = *y+8;

	return(*x,*y);
}
