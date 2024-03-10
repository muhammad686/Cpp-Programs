#include <iostream>
using namespace std;

int main()
{
	int grade = 0;
	double total = 0.0;
	int T_grades = 0;
	double avg = 0.0;	
	do 
	{
		cout << "Enter a grade(Alert:Enter 999 to quit.): ";
		cin >> grade;

		if (grade < 0 || grade > 100)
		{
 		cout << "The grade you entered is invalid" << endl;
		}
			else
			{
				T_grades= 1;
				total = total+grade;
			} 
		} while (grade != 999);
		avg = total /T_grades;
		cout << endl << endl;
		cout << "The average of the grades entered is " << avg<< endl;
		system("pause");
		return 0;
}  
