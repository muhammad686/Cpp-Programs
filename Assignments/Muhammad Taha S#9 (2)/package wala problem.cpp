#include <iostream>
using namespace std;
int main()
{
	int t_bl, bl, hrs, ad_hrs, pay;
	cout<<"Enter the amount paid(1000,1500,2000): ";
	cin>>pay;
	cout<<"no of hours used(hrs<=720): "; 
	cin>>hrs;
	cout<<"Name: muhammad Taha"<<endl;
		if(pay ==1000&&hrs<=10)
		 { 
		   cout<<"provided hours is: 10"<<endl;
		   bl = 1000;
		  cout<<"total bill is: "<<bl<<endl;
		  cout<<"The customer is using package A"<<endl;
		  cout<<"hours used is: "<<hrs<<endl;
		 }
	else
		if(pay==1000&&hrs>10)
		  {
		    ad_hrs = hrs - 10;
		    t_bl =1000 + (ad_hrs*200);
		    cout<<"provided hours is: 10"<<endl;
		    cout<<"hours used is: "<<hrs<<endl;
		    cout<<"The customer is using package A"<<endl;
		    cout<<"total bill: "<<t_bl<<endl;
		  }
	else
		if(pay==1500&&hrs<=20)
		{
			
			bl = 1500;
			cout<<"provided hours is: 20"<<endl;
			cout<<"hours used is: "<<hrs<<endl;
			cout<<"The customer is using package B"<<endl;
			cout<<"total bill is: "<<bl<<endl;
		    
		    
		}
	else
		if(pay==1500&&hrs>20)
		{
			
			ad_hrs = hrs- 20;
			t_bl = 1500 +(ad_hrs*100);
			cout<<"provided hours is: 20"<<endl;
			cout<<"hours used is: "<<hrs<<endl;
			cout<<"The customer is using package B"<<endl;
			cout<<"total bill: "<<t_bl<<endl;
		    
		}
	else
		if(pay==2000 )
		{
		    cout<<"provided hours is: unlimited"<<endl;
			cout<<"The customer is using package C";
			cout<<"total bill: 2000"<<endl;
		}
	
	
	
	
	
	
	return 0;
}
