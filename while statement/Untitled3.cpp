#include <iostream>
#include <iomanip>
#include <conio.h>


using namespace std;
int main()
{
	//const int STUDENT =10;
	//const int STEPSIZE =1;
	int ttl,s_no, obt, ptg, grade, std=1;
	ttl = 500;
	cout<<"Total marks: "<<ttl;
	cout<<"\n obtaind marks: ";
	cin>>obt;
	ptg = (obt/ttl)*100;
	cout<<"percentage: "<<ptg;
	
	cout<<"S.NO        OM      TM     PTG      GRADE\n"
	    <<"-----      ----    ----   -----     -----\n"<<endl;
	    
	while(std<=10)
	{
	
		if(ptg>=50&&ptg<=59)
		{
			cout<<grade<<"C";
		}
		else
		if(ptg>=60&&ptg<=69)
		{
			cout<<grade<<"B";
		}
		else
		if(ptg>=70&&ptg<=79)
		{
			cout<<grade<<"A";
		}
		else
		if(ptg>=80&&ptg<=100)
		{
			cout<<grade<<"A++";
		}
		
		cout<< setw(4) <<s_no
		    << setw(10) <<obt
		    << setw(9) <<ttl
		    << setw(9)<<ptg
		    << setw(10)<<grade<<endl;
		    std++;
	}
	
	
	
	
	return 0;
	
}
