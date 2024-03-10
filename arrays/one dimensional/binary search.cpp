#include <iostream>
using namespace std;
int main()
{
	int a[6]= {1,2,3,4,5,6};
	int first , last, mid, i, num;
	
	cout<<"enter the element: ";
	cin>>num;
	
	do{
		mid = (first+last)/2;
		if(a[mid]==num)
		{
			cout<<"find at location: "<<i+1<<endl;
			break;
		}
		else
		if(a[mid]<num)
		{
			first =mid + 1;
		}
		else
		last =mid -1;
	}
	while(first<=last);
	if(first>last)
	{
		cout<<"element hasn't found: ";
	}
	
	
	
	
	
	
	return 0;
}
