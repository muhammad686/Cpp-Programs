#include <iostream>
using namespace std;
int main()
{
	double perimeter,volume, underground_surface_area, length, width, average_depth;
	cout<<"enter length"<<endl;
	cin>>length;
	cout<<"enter width"<<endl;
	cin>>width;
	cout<<"enter average_depth"<<endl;
	cin>>average_depth;
	perimeter = 2*(length + width);
	cout<<perimeter<<endl;
	volume= length*width*average_depth;
	cout<<volume;
	underground_surface_area=2*(length+width)*average_depth+ (length*width);
	cout<<underground_surface_area<<endl;
	
	return 0;
}
