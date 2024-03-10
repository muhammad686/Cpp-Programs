#include <iostream>
using namespace std;
int main()
{
int date;
cout<<"enter the date: ";
cin>>date;

switch(date)
{


	case 1: 1,8,16,23,30: 	cout<<"you born on Monday"; break;
	case 2: 2,9,17,24,31; 	cout<<"you born on Tuesday"; break;
	case 3: 3,10,18,25;		cout<<"you born on Wednesday"; break;
	case 4: 4,11,19,26;		cout<<"you born on Thursday"; break;
	case 5: 5,12,20,27;		cout<<"you born on Friday"; break;
	case 6: 6,13,21,28;		cout<<"you born on Satuarday"; break;
	case 7: 7,14,22,29;		cout<<"you born on Sunday"; break;
	default: cout<<" invalid input"; break;
}


return 0;
}
