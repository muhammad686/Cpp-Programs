//call by refrence
#include <iostream>
using namespace std;

void sub(int &x, int &y)
{
	x=x+9;
	y = y+8;
	cout<<"the result is: "<<&x-&y;
}
int main()
{
int a,b;
	cout<<"enter the value of a: ";
	cin>>a;
	cout<<"enter the value of b: ";
	cin>>b;
	sub(a,b);
	return 0;
}
