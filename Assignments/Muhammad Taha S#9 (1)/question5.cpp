#include <iostream>
using namespace std;
int main()
{
	int hours, mints , sec,sec1,sec2,seconds, time;
	
	
	cout<<"enter the no of hours: ";
	cin>>hours;
	cout<<"enter the minutes: ";
	cin>>mints;
	cout<<"enter the seconds: ";
	cin>>sec;
	
	// converting hours and minutes into seconds
   sec1 = hours*3600;
   cout<<"converting hours into seconds: "<<sec1<<endl;
	sec2 = mints*60;
   cout<<"converting minutes into seconds: "<<sec2<<endl;
   
   seconds = sec + sec1 + sec2;
	cout<<"total time of the event is: "<<seconds<<" sec"<<endl;	
	
	
	
	
	return 0;
}
