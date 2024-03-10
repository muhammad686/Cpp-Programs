#include <iostream>
using namespace std;
int main()
{
	
	int a[10], check, i;
	for(i=0;i<=10;i++)
	{
		cout<<"values of an array: ";
		cin>>a[i];
	} 
	cout<<"enter the value: "<<endl;
	cin>>check;
	for(i=0;i<=10;i++)
	{
		if(check == a[i])
		{
			cout<<"found at location: "<<i+1<<endl;
			break;
		}
	}
	
	
	return 0;
}
