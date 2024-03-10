//templete type return value
#include<iostream>
using namespace std;

  template <class T>
  T abs(T value)
  {
	T absn;
  	if (value<0)
  	absn = -value;
  	else
  	absn =value;
  	return absn;
}
int main()
{
	int n1 = -23;
	float n2 = -12.23;
	double n3 = - 33.332;
	
	cout<<"the absolute value of "<<n1<<"      is: "<<abs(n1)<<endl;
	cout<<"the absolute value of "<<n2<<"   is: "<<abs(n2)<<endl;
	cout<<"the absolute value of "<<n3<<"  is: "<<abs(n3)<<endl;
return 0;
}
