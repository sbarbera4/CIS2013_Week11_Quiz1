#include <iostream>
#include <cstring>

using namespace std;


int main()
{
	int rows = 0;
	

	cout << "how many rows do you want? " << endl;
	cin >> rows;

	int *a;
	a = new int[rows];

	for (int i = 0; i < rows; i++)
	{
		cout << "how many computers on row "<< i + 1 << "?" << endl;
		cin >> a[i];


	}



	for (int
	{

	}

	for (int i = 0; i < rows; i++)
	{
		cout << a[i] << endl;
	}

}