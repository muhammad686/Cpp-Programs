#include <iostream>
using namespace std;
int main()
{
	const int NUMS =5;
	int i, grade[NUMS] ={1,2,3,4,5};
/*	for(i=0; i<6; i++)
	{
		cout<<"enter the value of grade:";
		cin>>grade[i];
	}
	cout<<endl;*/
	for(i=0;i<=NUMS;i++)
	{
		cout<<"grade["<<i<<"] is:   "<<grade[i]<<endl;

	}
return 0;
}
