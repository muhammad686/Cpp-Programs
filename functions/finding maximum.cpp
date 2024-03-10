#include <iostream>
using namespace std;
void findmax(int , int);
int sum(int, int);

void findmax(int x, int y)
{
	int maxnum;
	if(x>y)
	maxnum = x;                 //body
	else
	maxnum = y;
	
	cout<<"the maximunm number is: "<<maxnum<<endl;
	return;
}

int sum(int x, int y)
{
	return (x+y);
}
int main()
{
	int a,b;
	cout<<"enter the value of a: ";             //calling
	cin>>a;
	cout<<"enter the value  of b: ";
	cin>>b;
	
	findmax(a,b);
	return 0;
}

