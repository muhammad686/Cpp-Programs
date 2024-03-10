#include<iostream>
using namespace std;

template< class x>
x findmax(x a, x b)
{
	return (a>b)?a:b;
}
int main()
{

	int i1, i2;
	float f1, f2;
	char c1, c2;

	cout << "Enter two integers:\n";
	cin >> i1 >> i2;
	cout << findmax(i1, i2) <<" is larger." << endl;

	cout << "\nEnter two floating-point numbers:\n";
	cin >> f1 >> f2;
	cout << findmax(f1, f2) <<" is larger." << endl;

	cout << "\nEnter two characters:\n";
	cin >> c1 >> c2;
	cout << findmax(c1, c2) << " has larger ASCII value.";




	return 0;
}
