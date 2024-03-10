#include <iostream>
using namespace std;
int main()
{
	const int NUMS =5, total =0;
	int i, grade[NUMS];
	for(i=0; i<=NUMS; i++)
	{
		cout<<"enter the value of grade:";
		cin>>grade[i];
	}
	cout<<"\n the total of the grades: "<<endl;
	for(i=0;i<=NUMS;i++)
	{
		cout<<" "<<grade[i];
		total = total + grade[i];
		
	}
	cout<<"is"<<total<<endl;
	return 0;
}
