#include <iostream>
using namespace std;

int main()
{
	int num;
	cout << "Enter the number of lines: ";
	cin >> num;
	for (int i = 1; i <= num; i++)
	{
		for (int j = num; j > i; j--)	
		{
			cout << " ";
		}
		for (int j = 1; j <= i; j++)	
		{
			cout << "*" ;
		}

		cout << endl;
	}
	return 0;
}