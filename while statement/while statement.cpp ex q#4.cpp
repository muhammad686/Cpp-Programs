#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	const int  MAXGALLONS  = 20;
	const int  STARTVAL = 10;
	const int  STEPSIZE = 1;
	int gallons;
	double liters;
	
	cout<<" QUANTITY  QUANTITY\n"
	    <<" GALLONS   LITERS\n"
	    <<" -------   ----------\n";
	    
	    gallons = STARTVAL;
	while(gallons<= MAXGALLONS)
	{
		liters =gallons*3.785;
		cout << setw(4) <<gallons
		     << setw(4) <<liters<<endl;
		gallons =gallons + STEPSIZE;
	}
	return 0;
}
