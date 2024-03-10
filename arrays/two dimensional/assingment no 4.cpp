#include <iostream>
using namespace std;
int main()
{
	int i;
int ar[4][4] {
	          {12,13,14,15,16},
	          {21,22,23,24,25},
	          {31,32,33,34,35},
	          {56,78,67,43,46}
             };
	cout<<"\tBALOCHISTAN\t\tSINDH\t\tKPK\t\tPUNJAB\n";
	cout<<"PMLN\t";
for(i=0; i<4; i++)
    cout<<ar[0][i]<<"\t\t";
    cout<<endl;
    cout<<"MQM\t";
for(i=0; i<4; i++)
    cout<<ar[1][i]<<"\t\t";
    cout<<endl;
    cout<<"PPP\t";
for(i=0; i<4; i++)
    cout<<ar[2][i]<<"\t\t";
    cout<<endl;
    cout<<"PTI\t";
for(i=0; i<4; i++)
    cout<<ar[3][i]<<"\t\t";
    cout<<endl;
   
	return 0;	
}
