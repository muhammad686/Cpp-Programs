#include <iostream>
using namespace std;
int main()
{
const int MAXLS = 5;
int max, i, nums[MAXLS]; // = {1,34,4,6,4};
max =nums[0];
for(i=0; i<=MAXLS;i++)

	{
		cout<<"numbers are: ";
		cin>>nums[i];
	}	
for(i=0;i<=MAXLS; i++)
{
	if( max<= nums[i])
	{
	max= nums[i];	
	}
}	
	
		cout<<"the maximum  value is :"<<max<<endl;

	
	
	return 0;
}
