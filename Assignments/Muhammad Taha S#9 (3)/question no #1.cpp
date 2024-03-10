#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
const int MAXVAL = 90;
const int STEPSIZE = 5;
const int STARTVAL = 9;

int celsius;
double fahrenheit;
	
	cout<<"DEGREES   DEGREES\n\n"
	    <<"CELSIUS   FAHRENHEIT\n"
	    <<"-------    --------\n";
	    celsius = STARTVAL;
	while(celsius<=MAXVAL)
	   {
	   	 fahrenheit = (9.0/5.0)*celsius + 32;
	   	 cout<<  setw(4)  <<celsius
	   	     <<  setw(13) <<fahrenheit<<endl;
	   	celsius = celsius + STEPSIZE;
	   	
	   }
	
}
