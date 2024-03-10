#include <iostream>
//#include <iomanip>
//#include <cmath>
using namespace std;
int main()
{
	int i;
int ar[5][5] {
	          {12,13,14,15,16},
	          {21,22,23,24,25},
	          {31,32,33,34,35},
	          {42,43,45,56,67},
	          {56,78,67,43,46}
             };
	cout<<"\tPUNJAB\t\tSINDH\t\tGB\t\tKPK\t\tBALOCHISTAN\n";
	cout<<"PPP\t";
for(i=0; i<5; i++)
    cout<<ar[0][i]<<"\t\t";
    cout<<endl;
    cout<<"MQM\t";
for(i=0; i<5; i++)
    cout<<ar[1][i]<<"\t\t";
    cout<<endl;
    cout<<"PMLN\t";
for(i=0; i<5; i++)
    cout<<ar[2][i]<<"\t\t";
    cout<<endl;
    cout<<"PTI\t";
for(i=0; i<5; i++)
    cout<<ar[3][i]<<"\t\t";
    cout<<endl;
    cout<<"ANP\t";
for(i=0; i<5; i++)
	cout<<ar[4][i]<<"\t\t";
	
	return 0;	
}
