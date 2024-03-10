#include <iostream>
using namespace std;
int main()
{
int hours, med_benfts, net_pay, gross_pay, total_income, total_tax;
float income_tax;	
	cout<<"\t\t\t\t\t for 1st employ \t\t\t\t"<<endl;
	cout<<"enter the number of hours worked: ";
	cin>>hours;
	cout<<"pay of one hour is: "<<"$16.43"<<endl;
	gross_pay = hours*16.43;
	cout<<"gross_pay of 1st employ per week is: "<<" $"<<gross_pay<<endl;
	
	med_benfts = (2*gross_pay)/100;
	cout<<"medical benifit amount is: "<<"$"<<med_benfts<<endl;
	
	income_tax = (20*gross_pay)/100;
	cout<<"income tax amount is: "<<"$"<<income_tax<<endl;
	
	total_tax = income_tax+med_benfts;
	cout<<"total taxes amount is: "<<"$"<<total_tax<<endl;
	
	net_pay = gross_pay-total_tax;
	cout<<"net pay  of 1st employ is: "<<"$"<<net_pay<<endl;
	
	///////////////////////////////////////////////////////////////
	
	cout<<"\t\t\t\t\t for 2st employ \t\t\t\t\t"<<endl;
	cout<<"enter the number of hours worked: ";
	cin>>hours;
	cout<<"pay of one hour is: "<<"$12.67"<<endl;
	gross_pay = hours*16.43;
	cout<<"gross_pay of 1st employ per week is: "<<" $"<<gross_pay<<endl;
	
	med_benfts = (2*gross_pay)/100;
	cout<<"medical benifit amount is: "<<"$"<<med_benfts<<endl;
	
	income_tax = (20*gross_pay)/100;
	cout<<"income tax amount is: "<<"$"<<income_tax<<endl;
	
	total_tax = income_tax+med_benfts;
	cout<<"total taxes amount is: "<<"$"<<total_tax<<endl;
	
	net_pay = gross_pay-total_tax;
	cout<<"net pay  of 1st employ is: "<<"$"<<net_pay<<endl;
	
	
	
	return 0;
}
