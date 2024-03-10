#include <iostream>
#include <cmath>
//#include <iomanip>
using namespace std;
int main()
{
	int count, num,sum;
	count = 1;
	sum = 0;
	
	while(count<=10)
	{
		cout<<"enter a number: ";
		cin>>num;
		
		sum = sum+num;
		count++;
		cout<<"sum: "<<sum<<endl;
	}
	
	return 0;
}

