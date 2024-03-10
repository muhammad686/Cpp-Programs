#include <iostream>
using namespace std;
int main()
{
	// before swaping
	int a=2,s=3 , d =4, f =6,q;
	cout<<a<<"\t"<<s<<"\t"<<d<<"\t"<<f<<"\t\n"<<endl;
	// after swaping
	//a=6,s=4;d=3;f=2;
	q= a+s+d+f;
	s= q-(a+s+f);
	d =q-(a+d+f);
	f =q-(s+d+f);
	a = q-(a+s+d);
	cout<<a<<"\t"<<s<<"\t"<<d<<"\t"<<f<<"\t"<<endl;
	
	
	
	return 0;
}
