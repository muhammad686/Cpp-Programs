#include <iostream>
#include<fstream>
#include <string>
using namespace std;

int main()
{
	ifstream fin;
	
	int* data;
	int n = 5;
	fin.open("file.bin", ios::binary);
	if(fin.is_open())
	{
		
		data = new int[n];
		fin.read((char*)data, sizeof(int));
		
		for (int i = 0; i < n; i++)
		{
			cout << "data[" << i << "]" << data[i] << endl;
		}
		
		
		fin.close();
		delete[]data;
	}
	else
	{
		ofstream fout;
		data = new int[n];
		
		cout << "enter " << n << "values" << endl;
		for (int i = 0; i < n; i++)
		{
			cout << "enter data";
			cin >> data[i];
		}

		fout.open("file.bin", ios::in | ios::binary);

		fout.write((const char*)data, n*sizeof(int));

		
		fout.close();
		delete[]data;
	}
}