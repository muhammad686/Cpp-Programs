#include <iostream>
using namespace std;
int main()
{
int a[40]= {1,2,3,4,5,6}	;
	int pos, num, i;
	cout<<"enter the position and number: ";
	cin>>pos>>num;
	for(i=5;i>pos;i--)
	{
		a[i+1] = a[i];
		
	}
	a[pos] =num;
	cout<<"array: "<<a[i];
	for(i=0; i<6;i++)
    cout<<a[i];	
	
	
	
	return 0;
}
