#include<iostream>
using namespace std;
int main()
{
	
	//left & down
	/* int i, j;
	for (i = 0; i <= 5; i++)
	{
		for (j = 0; j <= i; j++)
		{
			cout << "*" ;

		}
		cout << " " << endl;
	}*/
	
	///left & up
	/*int i, j;
	for (i = 5; i >=0; i--)
	{
		for (j = 0; j <= i; j++)
		{
			cout << "*";

		}
		cout << " " << endl;
	}*/

	// left & up
	/*int i, j;
	for (i = 0; i <= 5; i++)
	{
		for (j = 5; j >=i ; j--)
		{
			cout << "*";

		}
		cout << " " << endl;
	}*/
	int i, j;
	for (i = 0; i <= 5; i++)
	{
		for (j = 0; j >= i; j++ )
		{
			cout << "*";

		}
		cout << " " << endl;
	}

	
}