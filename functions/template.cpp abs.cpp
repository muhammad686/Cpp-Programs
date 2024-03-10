#include<iostream>
using namespace std;
template <typename a>
a showabs(a num)
{
	if(num <0)
	num = -num;
cout<<"the absolute value of number is: "<<num<<endl;

	//return(num<0)?-num: num;
}
int main()
{
	int num1 = -123;
	float num2 = -12.32;
	double num3 = -123213.7;
	
	showabs(num1);
	showabs(num2);
	showabs(num3);
return 0;
}
