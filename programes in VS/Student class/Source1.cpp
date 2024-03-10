//#include<iostream>
//#include<string>
//#include<iomanip>
//using namespace std;
//
//class student
//{
//private:
//	int sem;
//	char* name;
//	char* fname;
//	char* regno;
//	char* contact;
//	char* email;
//	char* address;
//public:
//	
//	void setnames(char* n, char* fn)
//	{
//
//		name = n;
//		fname = fn;
//	}
//	void setsem(char* s)
//	{
//		sem = s;
//	}
//	void setregno(char* r)
//	{
//		regno = r;
//	}
//	void setodetails(char* c, char* e, char* a)
//	{
//		contact = c;
//		email = e;
//		address = a;
//		
//	}
//
//	void displaydetails()
//	{
//		cout << "Name      F.Name     Sem    Reg.No    Contact    Email   Address \n"
//			<< "----      ------     ---    ------    -------    -----   -------\n";
//		cout << setw(3) << name << "     "
//			<< setw(4) << fname << "     "
//			<< setw(6) << sem << "    "
//			<< setw(9) << regno << "   "
//			<< setw(11) << contact << "    "
//			<< setw(12) << email << "   "
//			<< setw(12) << address << "    " << endl;
//	}
//
//};
//int main()
//{
//	student s1;
//	s1.setnames("Muhammad Taha", "Ghulam Ali");
//	s1.setsem(4);
//	s1.setregno("04071913018");
//	s1.setodetails("03431293458", "taha@65", "kondus");
//
//	s1.displaydetails();
//
//
//
//
//
//
//	return 0;
//}