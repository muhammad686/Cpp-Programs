#include <iostream>
using namespace std;

void max(int x , int y)
{
	int maximum;
	if(x>y)
	  maximum =x;
	  else
	  maximum = y;
cout<<" the maximum of two numbers are: "<<maximum<<endl;
return;

}
int main()
{
//	int a , b;
//	cout<<" a :";
//	cin>>a;
//	cout<<" b :";
//	cin>>b;
	
	max(12,43);
	return 0;
}


