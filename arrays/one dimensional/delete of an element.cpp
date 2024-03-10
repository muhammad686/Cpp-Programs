#include <iostream>
using namespace std;
int main()
{
	const int ASD = 10;
	int a[ASD];// ={1,2,43,5,7,6,8,0,8,9};
	int pos, i;
	for (i=0; i<=10;i++)
	{
		cout<<" array value:";
		cin>>a[i];
	}
	cout<<"enter the pos number:";
	cin>>pos;
	for(i=pos; i<=10; i++) 
	{
		a[i] = a[i+1];
		
	}
	for(i=0;i<=9;i++)
	{
		cout<<a[i]<<"\t";
	}
	return 0;
}
