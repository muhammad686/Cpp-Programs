#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double distance, x,y;
	cout<<"enter x"<<endl;
	cin>>x;
	cout<<"enter y"<<endl;
	cin>>y;
	distance =sqrt(pow(x,2)+pow(y,2));
	cout<<distance<<endl;
	
	return 0;
}
