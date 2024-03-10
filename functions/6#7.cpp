#include<iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

void sqrItfun()
{
	
	double num;
	cout<<"NUM          SQR           CUBE"<<endl;
	cout<<"---          ---           ----"<<endl;
	for( num =1; num<=10; num++)
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
