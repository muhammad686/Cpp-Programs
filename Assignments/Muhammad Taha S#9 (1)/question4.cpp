#include <iostream>
using namespace std;
int main()
{
int length, width, perimeter,area;
cout<<"length: ";
cin>>length;
cout<<"width: ";
cin>>width;
perimeter = 2*(length + width);
cout<<"perimeter of the rectangle: "<<perimeter<<endl;
area = length*width;
cout<<"area of the rectangle: "<<area<<endl;

 
return 0;

}
