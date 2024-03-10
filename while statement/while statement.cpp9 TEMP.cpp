#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	const int  MAXCELSIUS = 50;
	const int  STARTVAL = 5;
	const int  STEPSIZE = 5;
	int celsius;
	double fahren;
	
	cout<<" DEGREES   DEGREEES\n"
	    <<" CELSIUS   FAHRENHEIT\n"
	    <<" -------   ----------\n";
	    
	    celsius = STARTVAL;
	while(celsius<= MAXCELSIUS)
	{
		fahren =(9.0/5.0)*celsius + 32.0;
		cout << setw(4) <<celsius
		     << setw(14) <<fahren<<endl;
		celsius =celsius + STEPSIZE;
	}
	return 0;
}
