#include<iostream>
using namespace std;
int main()
{
	int i, j;
	//colums
	for (i = 0; i <= 5; i++)
	{
		//rows
		for (j = 0; j <= i; j++)
		{
			cout << "*";
		}
		cout << " " << endl;
	}

}