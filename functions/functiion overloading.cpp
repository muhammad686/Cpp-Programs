#include<iostream>
using namespace std;

void dispaly(int x)
{
	if(x<0)
	x = -x;
	cout<<"the absolute value of x: "<<x<<endl;
}
void dispaly(float x)
{
	if(x<0)
	x = -x;
	cout<<"the absolute value of x: "<<x<<endl;
}
void dispaly(double x)
{
	if(x<0)
	x = -x;
	cout<<"the absolute value of x: "<<x<<endl;
}
int main()
{
	int x = 9;
	float y = 12.3;
	
	dispaly(x);
	dispaly(y);
}
