#include <iostream>
using namespace std;

void check(int x, double y, double z)
{
	cout<<x+y+z;
}
int main()
{
	int a,b,c;
	cout<<"enter the value of a: ";
	cin>>a;
	cout<<"enter the value of b: ";
	cin>>b;
	cout<<"enter the value of c: ";
	cin>>c;
	
	check(a,b,c);
	
	return 0;



}
