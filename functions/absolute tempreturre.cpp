#include<iostream>
using namespace std;
template <class T>

void showabs(T number)
{

	if (number< 0)
	number = -number;
	else
	if(number>0)
	number = +number;\

	
	cout<<" the absolute number is: "<<number<<endl;
	return;
}

int main()
{
/*	double num1 = 33.432;
	float num2 = 31.9;
	int num3 = 345;


	showabs(num1);
	showabs(num2);
	showabs(num3);
*/

double num;
cout<<"the value is: ";
while(num<=10)
{
	
	cin>>num;
	
}

	return 0;
}
