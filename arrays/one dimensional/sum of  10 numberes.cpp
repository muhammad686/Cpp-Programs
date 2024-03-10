#include <iostream>
using namespace std;
int main()
{
	int a[10], sum= 0;
	cout<<"enter the value for array: "<<endl;
	for(int i=0; i<10; i++ )
	{
		cin>>a[i];
	}
	for(int i=0; i<10; i++)
	{
		sum = sum + a[i];
		cout<<"sum: "<<sum<<endl;  //it will show sumat each step
	}
	//cout<<"sum: "<<sum<<endl;  //it will show total sum at last.
	
	return 0;
}
