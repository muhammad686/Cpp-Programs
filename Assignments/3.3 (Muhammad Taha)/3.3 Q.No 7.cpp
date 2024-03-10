#include <iostream>
#include <math.h>  /* pow & sqrt */
using namespace std;
int main()
{
	double x1 ,x2, y1, y2, distance;
	x1= -12;
	x2= -15;
	y1= 22;
	y2= 5;
	distance= sqrt(pow((x2-x1), 2) + pow((y2-y1) ,2));
	cout<<distance<<endl;
	
	return 0;
	
}
