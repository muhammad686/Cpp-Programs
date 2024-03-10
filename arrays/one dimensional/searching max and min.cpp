#include <iostream>
using namespace std;
int main()
{
 int size= 10;
 int a[size] ;
 int max, min, i, avg, sum =0;	
	for(i=0;i<=10;i++)
	{
		cout<<"value of array : ";
		cin>>a[i];
	}
	for(i=0;i<=size; i++)
	{
		if(max<=a[i])
		{
			max= a[i];
		}
	}
	cout<<" maximum value is: "<<max<<endl;
	for(i=0;i<=size; i++)
	{
		if(min>=a[i])
		{
			min= a[i];
		}
	}
			cout<<"minimum value is: "<<min<<endl;
			
	//for average value
	for(i=0;i<=size; i++)
	{
		
		sum = sum + a[i];
		
	}
	cout<<"sum is: "<<sum<<endl;
	avg = sum/size;
	cout<<"average is: "<<avg<<endl;
	return 0;
}
