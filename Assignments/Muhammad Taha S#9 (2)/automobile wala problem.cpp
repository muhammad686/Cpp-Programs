#include <iostream>
using namespace std;
int main()
{
	
	double my, w ;
	cout<<"enter the model year of a car: ";
	cin>>my;
	cout<<"enter the weight of a car(lbs): ";
	cin>>w;
	
	
	if(my<=1990&&w<2700)
	 {
	 	cout<<"weight class: 1"<<endl;
	 	cout<<"registration fee is: 26.50"<<" rs"<<endl;
	 }
else
	if(my<=1990&&w>=2700&&w<=3800)
	{
		cout<<"weight classs: 2"<<" rs"<<endl;
		cout<<"registration fee: 35.50"<<" rs"<<endl;
	}	
else
	if(my<=1990&&w>=3800)
	{
		cout<<"weight classs: 3"<<endl;
		cout<<"registration fee: 56.50"<<" rs"<<endl;
	}
else	
    if(my>=1991&&my<=1999&&w<2700)
	{
	 	cout<<"weight classs: 4"<<endl;
		cout<<"registration fee: 35.50"<<" rs"<<endl;	
	}	
else
	if(my>=1991&&my<=1999&&w>=2700&&w<=3800)
	{
		cout<<"weight classs: 5"<<" rs"<<endl;
		cout<<"registration fee: 45.50"<<" rs"<<endl;
	}
else
	if(my>=1991&&my<=1999&&w>=3800)
	{
		cout<<"weight classs: 6"<<endl;
		cout<<"registration fee: 62.50"<<" rs"<<endl;
	}
else
	if(my>=2000&&w<3500)
	{
		cout<<"weight classs: 7"<<endl;
		cout<<"registration fee: 49.50"<<" rs"<<endl;
	}
else
	if(my>=2000&&w>=3500)
	{
		cout<<"weight classs: 8"<<endl;
		cout<<"registration fee: 62.50"<<" rs"<<endl;	
	}
		
	
	
	return 0;
}
