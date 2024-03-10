#include<iostream>
using namespace std;
int main()
{

int meal_cost, tax_amount, tip_amount, subtotal, total_bill;

cout<<"enter Meal cost: ";
cin>>meal_cost;
tax_amount = (6.75/100)*meal_cost;
cout<<"Tax amount: "<<tax_amount<<endl;
subtotal= meal_cost + tax_amount;
cout<<"subtotal amount: "<<subtotal<<endl;
tip_amount = (8.5/100)*subtotal;
cout<<"Tip amount: "<<tip_amount<<endl;
total_bill = subtotal + tip_amount;
cout<<"total bill: "<<total_bill<<endl;


  return 0;
}
