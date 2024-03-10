#include <iostream>
using namespace std;

class calculator{
private:
	int p,q;
public:
	calculator(int a, int b)
	{
		p = a;
		q = b;
	}
	int compare()
	{
		if (p>q)
		{
			return p;
		}
		else
		return q;
	}
	void print()
	{
		cout<<"Greatest integer is: "<<compare()<<endl;
	}
};

int main()
{
	int n1,n2;
	cout<<"Enter num1: ";
	cin>>n1;
	cout<<"Enter num2: ";
	cin>>n2;
	calculator obj1(n1,n2);
	obj1.compare();
	calculator obj2=obj1;
	obj2.print();
	return 0;
}
