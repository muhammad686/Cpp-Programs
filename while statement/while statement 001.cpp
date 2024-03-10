#include <iostream>
#include <cmath>
#include <iomanip>
//#include <conio.h>
using namespace std;
int main()
{
	int a, b , c, count;
	count =1;
	while(a<=4)
	{
		cout<<a<<" ";
		while(b<=3)
		{
			cout<<b<<" ";
			while(c<=2)
			{
				cout<<c<<" ";
			    c++;
			}
		b++;	
		}
		a++;
	}
	return 0;
}
