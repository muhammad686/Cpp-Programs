#include <iostream>
#include <cmath>
#include <iomanip>
//#include <conio.h>
using namespace std;
int main()
{
int std,  obtm, tm, name,age, status;
	float ptg;
	std = 1;
	tm = 1100;
	cout<<"name: "<<endl;
	cin>>name;
	cout<<"age: "<<endl;
	cin>>age;
	cout<<"enter the obtained marks: "<<endl;
	cin>>obtm;
	cout<<"enter the total marks: "<<tm<<endl;
	ptg = (obtm/tm)*100;
	cout<<"percentage: "<<ptg<<endl;
	if(ptg>=90)
	{
		if(age>=17)
		cout<<"eligible"<<status<<endl;
	}
	else
	{
		cout<<"not eligible"<<status<<endl;
	}
	cout<<"NAME   AGE  PERCENTAGE  STATUS\n"
		    <<"----   ---  ----------  ------\n"<<endl;
	while(std<=10)
	{
		
		    cout<<setw(3) <<name
		        <<setw(5) <<age
		        <<setw(9) <<ptg
		        <<setw(10)<<status<<endl;
		        std++;
	}
return 0;	
}
