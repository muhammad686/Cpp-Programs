#include <iostream>
using namespace std;
int main()
{
	int page;
	char phealth, pdskills;
	cout<<"enter the page: ";
	cin>>page;
	cout<<"enter phealth: ";
	cin>>phealth;
	cout<<"enter pdskills: ";
	cin>>pdskills;
		 if(page>= 18 && page<=60)
		  {
		  
			 if(phealth=='H'||phealth=='I'||phealth=='J')
			 {
			 	
				 if(pdskills=='X'||pdskills=='Y'||pdskills=='Z')
				 	{
				 	
					 cout<<"eligible for driving";
					}
				else
					{
			 		cout<<"not eligible for SKILL driving";
				
					}
			}
			 else
			 	cout<<"not eligible for HEALTH driving";
		}
		else
			cout<<"not eligible for AGE driving";

return 0;
}
