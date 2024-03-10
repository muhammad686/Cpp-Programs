#include <iostream>
#include <cmath>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
const int MAXVAL = 30;
const int  STEPSIZE = 3;
const int STARTVAL = 3;

 float feet;
 float meter;
  
 cout<<"DISTANCE   DISTANCE\n"
     <<"METER       FEET\n"
	 <<"----        ------\n";
	 
	 feet = STARTVAL; 
   while(feet<=MAXVAL)
    {
    	meter = 3.28*feet;
    	cout<< setw(4) << feet
    	    << setw(15) << meter <<endl;
    	feet = feet + STEPSIZE;    
	}
 	return 0;	
	
}
		
