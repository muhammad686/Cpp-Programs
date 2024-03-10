#include <iostream>
#include<fstream>
#include <string>
using namespace std;

int main()
{
	ifstream fin;
	//int n;
	int* data;
	int x = 5;
	fin.open("file.bin", ios::binary);
	if(fin.is_open())
	{
		/*fin.read((char*)&n, sizeof(int));
		/*cout << "the number is: " <<n<< endl;*/
		/*data = new int[x];
		fin.read((char*)data, x*sizeof(int));
		for (int i = 0; i < x; i++)
		{
			cout << "data[" << i << "]" << data[i] << endl;
		}
		delete[]data;*/
		fin.close();
		
	}
	else
	{
		ofstream fout;
		data = new int[x];
		cout << "enter data";
		for (int i = 0; i < x; i++)
		{
			cout << "enter data";
			cin >> data[i];
		}
		fout.open("file.bin", ios::binary);
			/*cout << "enter a number:";
			cin >> n;
			fout.write((const char*)&n, sizeof(n));*/
		fout.write((const char*)data, x * sizeof(int));
		fout.close();
		delete[]data;


	}












}