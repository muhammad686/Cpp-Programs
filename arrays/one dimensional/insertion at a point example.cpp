#include <iostream>
using namespace std;
int main()
{
	
	int a[144] = {1,2,3,4,5,6};
	int pos, num, i;
	
	cout<<"enter the value of pos and num: ";
	cin>>pos>>num;
	for(i=5;i>=pos;i++)
	{
		a[i+1] = a[i];
		a[pos] = num;
	}
	cout<<"%d new array %d";
	for (i=0;i<=6;i++)
	{
		cout<<a[i];
	}
	
	
	
	
	
	
	return 0;
}
