#include <iostream>
using namespace std;
int main()
{
	int length1, width1, length2, width2, area_of_yard, area_of_house , area_of_ground, time;	
	area_of_yard = length1*width1;
	
	cout<<"length1: ";  //values are in feeet
	cin>>length1;
	cout<<"width1: ";    //values are in feeet
	cin>>width1;
	
	area_of_yard = length1*width1;  //values are in feeet
	cout<<"area of yard: "<<area_of_yard<<" square feet"<<endl;   
	
	cout<<"length2: ";   //values are in feeet
	cin>>length2;
	cout<<"width2: ";    //values are in feeet
	cin>>width2;
	
	area_of_house = length2*width2;       // values are in feeet
	cout<<"area of house: "<<area_of_house<<" square feet"<<endl;    
	
	area_of_ground = area_of_yard - area_of_house;   
	cout<<"area_of_ground: "<<area_of_ground<<" square feet"<<endl;  
	
	time = area_of_ground/2; // grass is being cut at the rate of 2 square feet per sec 
	cout<<"time required to cut the grass is: "<<time<<" seconds"<<endl; 
	
	

	return 0;
}
