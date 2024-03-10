#include<iostream>
using namespace std;

double tempvert(double);

int main()
{
	const int CVERTS = 5;
	int count, fahren;
	for(count=0; count<=CVERTS;count++)
	{
		
		cout<<"enter the value in fahrenite: ";
		cin>>fahren;
		cout<<"the celsius equelient is :"<<tempvert(fahren)<<endl;
		
	}
	return 0;
}
double tempvert(double inTemp)
{
	return(5.0/9.0)*(inTemp -32.0);
}
