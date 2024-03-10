#include<iostream>
#include<iostream>
#include <conio.h>
#include <iomanip>
#include<string>
using namespace std;

void sqrItfun(double start ; double maxnum; double increment)
{

	double num;
	cout<<"NUM          SQR           CUBE"<<endl;
	cout<<"---          ---           ----"<<endl;
	for( num= start; num<=(start + maxnum*increment)-1; num+increment)
	{



	cout<<setw(2)<<num<<"      "
        <<setw(7)<<num*num<<"       "
		<<setw(8)<<num*num*num<<endl;
}
}
int main()
{
	sqrItfun();
	return 0;
}
