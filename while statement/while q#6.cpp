#include <iostream>
using namespace std;
int main()
{
	
	int price, yrs, dp,ttl;
	price = 28000;
	yrs = 7;
	dp = 4000;
	ttl = price - dp;
	
	cout<<"YEARS    PRICE   DEP-PR     TOTAL\n"
	    <<"-----    -----   ------     -----\n"<<endl;
	    
while(yrs<=7)
{
	ttl = price - dp;
	cout<< setw(4) <<years
	    <<setw(8) <<price
	    <<setw(12) <<dp
	    <<setw(16) <<ttl<<endl;
	    
	    years = years + 1;
}
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
