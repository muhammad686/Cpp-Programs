#include <iostream>
using namespace std;
int main()
{
	const int G = 5;
	double grade[G];
	int i, sum =0 ;
	for(i =0; i<=G; i++)
	{
		cout<<"enter the value for G: ";
		cin>>grade[i];
	}
	cout<<endl;
	for( i=0; i<=G; i++)
	{
		//print grade
     cout<<"grade ["<<i<<"]is "<<grade[i]<<"\n";
	}
	for( i =0;i<=G;i++)
	{
	    
		sum = sum + grade[i];
		
	}
		cout<<"total grades are: "<<sum<<endl;
	
	return 0;
}
