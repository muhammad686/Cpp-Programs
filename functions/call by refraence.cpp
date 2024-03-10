#include <iostream>
using namespace std;

void newval(double&, double&);

int main()
{
	int a, b;
	cout<<"enter the value of a\t & b: ";
	cin>>a>>b;
	cout<<"the value of a is: "<<a;
	cout<<"the value of b is: "<<b;

	newval(a,b);
//	cout<<"the value in a is now: "<<a;
//	cout<<"the value in b is now: "<<b;

	return 0;

}
void newval(double& x, double& y)
{
	cout<<"the value in x is "<<x<<endl;
	cout<<"the value in y is\n\n "<<y<<endl;
	x= 897.997;
	y=986.890;

	return;
}
