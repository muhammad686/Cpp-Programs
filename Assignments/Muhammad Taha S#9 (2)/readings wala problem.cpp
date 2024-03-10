#include <iostream>
using namespace std;
int main()
{
double  tol_rdg;
cout<<"enter the value for tol_rdg : ";
cin>>tol_rdg;
	
if(tol_rdg<0.1)
   {
   	 cout<<"space exploration";
   }
else
  if(tol_rdg>=0.1&&tol_rdg<1)
  {
    cout<<"military grade";
  }	
else
if(tol_rdg>=1&&tol_rdg<10)
 {
 	cout<<"commeercial grade";
 }	
else
if(tol_rdg>=10)
 {
 	cout<<"toy grade";
 }	
	
	
	
	return 0;
	
}
