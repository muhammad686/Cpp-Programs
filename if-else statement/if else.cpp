#include <iostream>
using namespace std;
int main()
{
 int a , b ,c, max, min, middle;
 cout<<"enter the value for a: ";
 cin>>a;
 cout<<"enter the value for b: ";
 cin>>b;
 cout<<"enter the value for c: ";
 cin>>c;
 
if(a>b &&b>c&&a>c)
{
	max = a;
	cout<<"max: a ="<<a<<endl;
	min = c;
	cout<<"min: c ="<<c<<endl;
	middle = b;
	cout<<"midlde: b ="<<b<<endl;
}
else
if(b>a&&b>c&&a>c)
{
	max  = b;
	cout<<"max: b ="<<b<<endl;
	min = c;
	cout<<"min: c ="<<c<<endl;
	middle = b;
	cout<<"middle: a ="<<a<<endl;
}
else
if(c>b&&b>a&&c>a)
{
 	max = c;
	cout<<"max: c ="<<c<<endl;
	min = a;
	cout<<"min: a ="<<a<<endl;
	middle = b;
	cout<<"middle: b ="<<b<<endl;
}
else
if(a>c&&c>b&&a>b)
{
	max = a;
	cout<<"max: a ="<<a<<endl;
	min = b;
	cout<<"min: b ="<<b<<endl;
	middle = c;
	cout<<"middle: c ="<<c<<endl;
}


return 0;
}
