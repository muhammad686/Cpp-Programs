#include<iostream>
using namespace std;

class smallobj
{
private:
	int somedata;
public:
	void setsomedata(int d) {
		somedata = d;
	}
	void showdata() {
		cout << "Data is given as: " << somedata<<endl;


	}
};
int main()
{
	smallobj s1, s2;
	s1.setsomedata(1122);
	s2.setsomedata(3456);

	s1.showdata();
	s2.showdata();

	return 0;


}