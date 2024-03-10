#include<Iostream>
using namespace std;
int main()
{
	
	int num=0;
	int lar;
	int small;
	int n;

	lar=0;
	small=0;
	cout<<"Enter number of integers  "<<endl;
	cin>>n;
	for(int i=1;i<=n;i++)
	{

	cout<<"Enter the number "<<endl;
	cin>>num;
	while(num!=-99)

	 if(num>lar)
		{
			lar=num;
		}
	
	else if(num<small)
	{
		small=num;
		
	}
	else
	{
		lar = lar;
		small=small;
	}
		
		
	}
	cout<<"Largest number is:"<<lar<<endl;
	cout<<"Smallest number is:"<<small<<endl;
	return 0;
}
