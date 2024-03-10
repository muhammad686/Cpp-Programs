#include <iostream>
using namespace std;
int main()

{
	int amount, fiveth,th,fiveh,h,fifty,twenty,ten,five,two, one;
	cout<<"enter the amount of money you input";
cin>>amount;
fiveth=amount/5000;
amount=amount%5000;
th=amount/1000;
amount=amount%1000;
fiveh=amount/500;
amount=amount%500;
h=amount/100;
amount=amount%100;
fifty=amount/50;
amount=amount%50;
twenty=amount/20;
amount=amount%20;
ten=amount/10;
amount=amount%10;
five=amount/5;
amount=amount%5;
two=amount/2;
amount=amount%2;
one=amount/1;
amount=amount%1;

cout<<"five thousand rupees are="<<fiveth;
cout<<"thousnd rupees are="<<th;
cout<<"five hundred rupees are="<<fiveh;
cout<<"hundred rupees are="<<h;
cout<<"fifty rupees are="<<fifty;
cout<<"tweenty rupees are="<<twenty;
cout<<"ten rupees are="<<ten;
cout<<"five rupees are"<<five;
cout<<"two rupees are="<<two;
cout<<"one rupees are="<<one;
	
return 0;	
}
