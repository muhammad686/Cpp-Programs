#include <iostream>
using namespace std;
int main()
{
	int fax_amount =3 , pages;
	float pages_charge, total;
	cout<<"enter the number of the pages: ";
	cin>>pages;
	pages_charge = pages*0.20;
	cout<<"pages charge: "<<pages_charge<<endl;
	cout<<"fax amount: "<<3.00<<endl;
	total = fax_amount +pages_charge;
	cout<<"total charge: "<<total<<endl;
	
	
	return 0; 
}
