#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int a[50], i = 0;
	char choice;
	do
	{
		cout<<"enter the "<<i+1<<"  element: "<<endl;
		cin>>a[i];
		i = i+1;
		cout<<"Do you want gto enter again (press Y/y )";
		cin>>choice;
	}
	while(choice=='Y'||choice == 'y');
	cout<<"element are: "<<endl;
	for(int j=0; j<i; j++)
	{
		cout<<a[j]<<"\t\t";
	}
    
    return 0;
}
