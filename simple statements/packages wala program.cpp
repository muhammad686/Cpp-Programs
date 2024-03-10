#include<iostream>
using namespace std;
int main()
{
	int hours;
	char pakage;
	string name;
	cout<<"enter the name"<<endl;
	cin>>name;
	cout<<"enter the pakage"<<endl;
	cin>>pakage;
	cout<<"enter the hours"<<endl;
	cin>>hours;
	if(pakage=='A')
	{
		if(hours<=10 )
		{
			cout<<"your name : "<<name<<endl;
			cout<<"your pakage :"<<pakage<<endl;
			cout<<"your hourly usage:"<<hours<<endl;
			cout<<"your total monthly bill is: 1000"<<endl;
		}
		else
		{
			int rem=hours-10;
			int total=1000+(rem*200);
				cout<<"your name : "<<name<<endl;
			cout<<"your pakage :"<<pakage<<endl;
			cout<<"your hourly usage:"<<hours<<endl;
			cout<<"your total monthly bill is: "<<total<<endl;
			
		}
	}
	else if(pakage=='B')
	{
	if(hours<=20 )
		{
			cout<<"your name : "<<name<<endl;
			cout<<"your pakage :"<<pakage<<endl;
			cout<<"your hourly usage:"<<hours<<endl;
			cout<<"your total monthly bill is: 1500"<<endl;
		}
		else
		{
			int rem=hours-20;
			int total=1500+(rem*100);
				cout<<"your name : "<<name<<endl;
			cout<<"your pakage :"<<pakage<<endl;
			cout<<"your hourly usage:"<<hours<<endl;
			cout<<"your total monthly bill is: "<<total<<endl;
			
		}	
	}
	else if(pakage=='C')
	{
			cout<<"your name : "<<name<<endl;
			cout<<"your pakage :"<<pakage<<endl;
			cout<<"your hourly usage:"<<hours<<endl;
			cout<<"your total monthly bill is: 2000"<<endl;
	}
	else 
	{
		cout<<"pakage inviled"<<endl;
	}
	return 0;
}
