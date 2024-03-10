#include <iostream>
using namespace std;
void phw()
{
	cout << "Hello world!" << endl;
}
int* add(int* a, int* b)
{
	int c;
	int* p;
	p = new int;
	
	c = *a + *b;
	return &c;
	delete p;
}
int main()
{
	int x=7, y=9;
	int *c = add(&x, &y);
	phw();
	cout << " c is: " << *c << endl;
}