#include <iostream>
using namespace std;

template<typename W>
W findmax(W x, W y)
{
	int maximum;
	if(x>y)
		maximum =x;
	else
	    maximum	=y;
}
int main()
{
	
	int a =4,b=5;
	float c=4.3,d=4.2;
	//char e=23,f=23.4;

	
//	cout<<"/////////////////////before swaping////////////////////"<<endl;
//	cout<<" a :"<<a<<"\n b :"<<b<<endl;
//	cout<<" c :"<<c<<"\n d :"<<d<<endl;
//	cout<<" e :"<<e<<"\n f :"<<f<<endl;
//	
//	swap(a,b);	cout<<"enter the intiger values: ";
//	cin>>a>>b;
//	cout<<"enter the float values: ";
//	cin>>c>>d;
//	cout<<"enter the double values";
//	cin>>e>>f;
//	swap(c,d);
//	swap(e,f);
//	cout<<"/////////////////////after swaping////////////////////"<<endl;
//	cout<<" a :"<<a<<"\n b :"<<b<<endl;
//	cout<<" c :"<<c<<"\n d :"<<d<<endl;
//	cout<<" e :"<<e<<"\n f :"<<f<<endl;
	
	findmax(a,b);
	findmax(c,d);
	//findmax(e,f);

return 0;
}
