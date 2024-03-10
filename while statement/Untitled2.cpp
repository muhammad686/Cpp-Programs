#include <iostream>
#include <cmath>
#include <conio.h>
#include <iomanip>
using namespace std;
int main()
{
	
	int price, yrs, dp,end_dp_yr,acm_dp;
	price = 28000;
	yrs = 1;
	dp = 4000;
//	ttl = price - dp;
	
	cout<<"YEAR      PRICE      DEP     END-DEP-YR     ACM-DP\n"
	    <<"-----     -----   ------     ------        -----\n"<<endl;
	    
while(yrs<=7)
{
    end_dp_yr= price - dp;
  //  acm_dp = acm_dp +dp;
	cout<<setw(3) <<yrs
	    <<setw(10)<<price
	    <<setw(12) <<dp
	    <<setw(10) <<end_dp_yr
	    <<setw(14) <<acm_dp<<endl;
	    end_dp_yr--;
	    yrs++;
}
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
