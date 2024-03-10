#include<iostream>
using namespace std;
class Prime
{
	private:
		int n1;
		int n2;
	public:
	Prime();
	Prime(int,int);
	void Compare(int,int);
	void print();
};

	Prime::Prime()
	{
		num1=0;
		num2=0;
	}
	Prime::Prime(int num1,int num2)
	{
		this->num1=num1;
		this->num2=num2;
	}
	void Prime::Compare(int num1,int num2)
	{
		this->num1=num1;
		this->num2=num2;
		int sum=num1+num2;
	}
	void Prime::print()
	{
		int check;
		if(num1+num2>10)
		{
			cout<<"Sum of  numbers is greater than 10 = "<<(num1+num2);
		}
		else
		{
			cout<<"Sum of Value of numbers is less than 10 = "<<(num1+num2);
		}
	}
int main()
{
	Prime p;
	int val1,val2;
	cout<<"Enter value 1 = ";
	cin>>val1;
	cout<<endl<<"Enter value 2 = ";
	cin>>val2;
	p.Compare(val1,val2);
	p.print();
	return 0;
}  
