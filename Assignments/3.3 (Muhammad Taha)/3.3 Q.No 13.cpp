#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double half_life , lambda;
	lambda= 0.00026;
	half_life = log(2)/lambda;
	cout<<half_life<<endl;
	
	return 0;
}
