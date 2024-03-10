#include <iostream>
using namespace std;
int main()
{
	int unit1 , unit2, units, bill, unit_rate;
	cout<<"enter the previous readings: ";
	cin>>unit1;
	cout<<"enter the  current readings: ";
	cin>>unit2;
	units = unit1+unit2;
	cout<<"No of units used is: "<<units<<endl;
	
if(units<100)
{
	unit_rate =5;
}
if(units>=100&&units<200)
{
	unit_rate = 10;
}
else
if(units>=200&&units<300)
{
	unit_rate = 15;
}
else
if(units>=300&&units<400)
{
	unit_rate = 20;
}
else
if(units>=400)
{
   unit_rate = 20;
}				
	
	
	bill = units*unit_rate;
	cout<<"total bill is: "<<bill;	
	
	
	
	return 0;
}
