#include <iostream>
using namespace std;
int main()
{
	int a , b;
	char opr;

	cout<<"a: ";
	cin>>a;
	cout<<"b should be non zero for division."<<endl;
	cout<<"b: ";
    cin>>b;
    cout<<"operator: (+,-,/,*) "<<endl;
	cin>>opr;
	switch(opr)
	{
		case  '+':  cout<<a<<""<<'+'<<b<<""<<"=";cout<<a+b; break;
		case  '-':  cout<<a<<""<<'-'<<b<<""<<"=";cout<<a-b; break;
		case  '*':	cout<<a<<""<<'*'<<b<<""<<"=";cout<<a*b; break;
		case  '/':	cout<<a<<""<<'/'<<b<<""<<"=";cout<<a/b; break;
		default: cout<<"invalid";break;
		
		
	}
	
	return 0;
}
