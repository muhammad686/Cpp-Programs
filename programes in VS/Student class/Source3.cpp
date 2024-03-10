//#include<iostream>
//#include<string.h>
//using namespace std;
//
//class animal
//{
//private: 
//	char* n;
//	int qty;
//	char* t;
//public:
//	animal()
//	{
//		n = NULL;
//		qty = 0;
//		t = NULL;
//	}
//	animal(const char* an, const char* at, int aqty)
//	{
//		n = new char[strlen(an) + 1];
//			strcpy(n, an);
//		t = new char[strlen(at) + 1];
//		strcpy(t, at);
//		qty = aqty;
//	}
//	void setdata(const char* an, const char* at )
//	{
//		n = new char[strlen(an) + 1];
//		strcpy(n, an);
//		t = new char[strlen(at) + 1];
//		strcpy(t, at);
//		
//	}
//
//	void setqty(int aqty)
//	{
//		qty = aqty;
//	}
//	void displaydata()
//	{
//		cout << n ;
//		cout  << qty ;
//		cout << t;
//	}
//	
//};
//
//int main()
//{
//	animal obj;
//	obj.setdata("lion", "mammal");
//	obj.setqty(12);
//
//}