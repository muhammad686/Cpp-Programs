#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int arr[5][5]={{34,45,56,23},{23,34,45,66},{12,23,43,56},{67,64,32,21},{81,91,71,41}};
	cout<<"\tPunjab\t\tSindh\t\tKPK\t\tBalochistan\t\tGB\n";
	cout<<"PPP\t";
	for(int i = 0; i<5; i++)
		cout<<arr[0][i]<<"\t\t";
		cout<<endl;
		cout<<"PMLN \t\t";
	for(int i = 0; i<5; i++)
		cout<<arr[1][i]<<"\t\t";
		cout<<endl;
		cout<<"PTI \t\n";
	for(int i = 0; i<5; i++)
		cout<<arr[2][i]<<"\t\t";
		cout<<endl;
		cout<<"ANP  \t\n";
	for(int i = 0; i<5; i++)
		cout<<arr[3][i]<<"\t\t";
	    cout<<endl;
	//for(int i = 0; i < 5; i++)
	//    cout<<arr[4][i]<<"\t\t";
	//    cout<<endl;
}
