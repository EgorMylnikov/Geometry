#include <iostream>
using namespace std;
#define SQU

int main()
{
	setlocale(LC_ALL, "Russian");

	
	int n;
	cout << "введите число"; cin >> n;



	  for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}



}