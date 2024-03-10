#include <iostream>
using namespace std;
int main()
{
	char ch ,a ,A;
	int location;
	cout<<"enter the the value for ch: ";
	cin>>ch;
	
	if(ch>='a'&&ch<='z')
	{
	
	 cout<<"The entered value is lowercase"<<endl;
	 location =	(ch-'a')+1;
	 cout<<"location of value is: "<<location<<endl;
	 
	}
else
	if(ch>='A'&&ch<='Z')
	{
	 cout<<"The entered value is uppercase"<<endl;
	 location =	(ch-'A')+1;
	 cout<<"location of value is: "<<location<<endl;	
	}	
else
    {
    	cout<<"the entered value is neither uppercase nor lowercase";
	}
	
	
	
	
	
	
	
	
	return 0;
}
