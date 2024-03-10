#include<iostream>
#include<string>
using namespace std;
class person {
private:
		char name;
	    int age;
public:
	void  name(string n)
	{
		cout << name << " :" << " muhammad taha" << endl;
	}
	

};
class student : private person {
private:
	int regno;
	int semester;

};
int main()
{
	student std1;
	std1.name();
	return 0;
}
