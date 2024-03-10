#include <iostream>
using namespace std;

void findmax(int, int);

int main()
{
	int firstnum, secnum;
	cout<<"enter the first number: ";
	cin>>firstnum;
	cout<<"enter the second number: ";
	cin>>secnum;
	
	findmax(firstnum,secnum);
	
	return 0;
	
}
void findmax() (int x, int y)
{
	int maxnum;
	if(x>=y)
	maxnum =x;
	else
	maxnum = y;
	
	return;
}
