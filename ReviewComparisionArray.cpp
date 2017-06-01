#include <iostream>
using namespace std;

void compare(int *a, int *b)
{
	int Alice = 0, Bob = 0;
	for (int i = 0; i <= 2; i++)
	{
		if (a[i] > b[i])
			Alice = Alice + 1;
		else if (a[i] < b[i])
			Bob = Bob + 1;
	}
	cout << "Score for Alice: " << Alice << " & Score for Bob: " << Bob << endl;
}

int main ()
{
	int a[3], b[3], count;

	cout << "Enter the 3 scores (1-100) for Alice: " << endl;
	for (count = 0; count <= 2; count++)
	{
		cin >> a[count];	
	}

	cout << "Enter 3 scores (1-100) for Bob: " << endl;
	for (count = 0; count <= 2; count++)
	{
		cin >> b[count];	
	}

	compare(a, b);
}
