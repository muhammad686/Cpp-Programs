#include <iostream>
using namespace std;

void newval(double&, double&);

int main()
{
	int firstnum, secnum;
	cout<<"enter two numbers: ";
	cin>>firstnum>>secnum;
	
	newval(firstnum ,secnum)
	cout<<"the value in firstnum is: "<<fisrtnum<<endl;
	cout<<"the value in secnum is:   "<<secnum<<endl;
	
	
	return 0;
}
void newval(double& xnum , double& ynum)
{
	cout<<"value in xnum is: "<<xnum;
	cout<<"value in ynum is: "<<ynum;
	return;
}
