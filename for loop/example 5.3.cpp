#include <iostream>
using namespace std;
int main()
{
	const int NUMSTUDENTS = 2;
	const int NUMGRADES = 4;
	
	int i, j;
	double total, avg, grade;
	for(i=1; i<=NUMSTUDENTS; i++)
	{
		total = 0;
		for(j=1; j<=NUMGRADES; j++)
		{
			cout<<"enter the examination grades for students: "<<j<<" :";
			cin>>grade;
			 total = total + grade;
		}
		avg =  total/NUMGRADES;
		cout<<"\n the average of student is: "<<i<<" is "<<avg;
	}
	
	return 0;
}
