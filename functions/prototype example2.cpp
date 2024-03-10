#include <iostream>
using namespace std;

void findmax() (int x, int y)
{
	int maxnum;
	if(x>=y)
	maxnum =x;
	else
	maxnum = y;
	findmax(x,y);
	return;
}
