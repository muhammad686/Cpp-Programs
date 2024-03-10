#include <iostream>
#include<string.h>
using namespace std;

class a {
	char* name;
public:
	a() {
		name = null;
	}
	a(const char* n)
	{
		name = new char[strlen(n) + 1];
		strcpy(name, n);
	}
	a(const a& obj) {
		name = new char[strlen(obj.name) + 1];
		strcpy(name, obj.name);
	}
	void setname(const char* n)
	{
		name = new char[strlen(n) + 1];
		strcpy(name, n);
	}
	void getname() {
		cout << name;
	}
	~a() {
		delete name;
		cout << "dest";
	}
};

int main()
{
	a obj;
	cout << "constructir is called";
	a obj2("balti");
	obj.setname("ali");
	obj.getname();
	cout << endl;
	obj2.getname();
	obj = obj2;
	obj.getname();
}