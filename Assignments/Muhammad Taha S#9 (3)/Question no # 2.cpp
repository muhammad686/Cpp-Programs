#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d,e;//(a is the 1st bowler ,b is 2nd and so on)
	int avg;
	for(int i=1;i<=5;i++)
	{
		int s=0;
		for(int j=1;j<=3;j++)
		{
			cout<<"Enter the Scores of "<<i<<" bowler on "<<j<<" ball:"<<endl;
			cin>>a;
			s=s+a;
		}
	avg=s/3;
	cout<<"Average scores of "<<i<<" bowler:"<<avg<<endl;

	}
	return 0;
}
