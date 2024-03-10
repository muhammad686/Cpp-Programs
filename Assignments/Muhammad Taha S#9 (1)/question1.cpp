#include <iostream>
using namespace std;
int main()
{
	float milk, liters, carton, cartons, profit, cost;
	cout<<"one liter of milk is: "<<" $0.38"<<endl;
	cout<<"enter the amount of milk  produced in the morning (liters):  ";
	cin>>milk;

	carton = 3.78;
	cout<<"one carton can hold milk (liters): "<<" 3.78 liters"<<endl;
	cartons = milk/3.78;
	cout<<"no of cartons need to hold the milk: "<<cartons<<endl;
	profit = cartons*0.27;
	cout<<"profit per catton is: "<<" $0.27"<<endl;
	cout<<"total profit is: "<<profit<<"$"<<endl;
	cost = 0.38*milk;
	cout<<"the total cost of producing milk is: "<<cost<<"$"<<endl;
	
	
	
	return 0;
}
