#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	
	int num;
	cout<<" NUMBER   SQUARE  CUBE\n"
	    <<" ------   ------  ----\n";
	num =1;
	while(num<11)
	{
		cout<<setw(6) <<num<<" "
		    <<setw(6) <<num*num<<" "
		    <<setw(6) <<num*num*num<<" "<<endl;
		num++;
	}
	return 0;
}
