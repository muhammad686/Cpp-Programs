#include <iostream>
using namespace std;
int main()
{
 double sub[10],sum = 0;
 cout<<"enter the vlaue for array: ";
 for(int i =0; i<=10; i++)
     {
     	cin>>sub[i];
	 }
for(int j=0; j<=10; j++)
	{
		sum = sum+ sub[j];
		cout<<sub[j];
	}
cout<<"sum"<<sum;
return 0;
}
