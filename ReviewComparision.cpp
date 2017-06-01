#include <iostream>
using namespace std;


void compare(int a1, int a2, int a3, int b1, int b2, int b3)
{
	int Alice = 0, Bob = 0;
	if (a1 > b1)
		Alice = Alice + 1;
	else if (a1 < b1)
		Bob = Bob + 1;
	if (a2 > b2)
		Alice = Alice + 1;
	else if (a2 < b2)
		Bob = Bob + 1;
	if (a3 > b3)
		Alice = Alice + 1;
	else if (a3 < b3)
		Bob = Bob + 1;
	cout << "Score for Alice: " << Alice << " & Score for Bob: " << Bob << endl;
}

int main ()
{
	int a1, a2, a3, b1, b2, b3;

	cout << "Enter scores for Alice (seperated by space) and between 1-100: " << endl;
	cin >> a1;
	cin >> a2;
	cin >> a3;
	cout << "Enter scores for Bob (seperated by space) and between 1-100: " << endl;
	cin >> b1;
	cin >> b2;
	cin >> b3;

	compare(a1, a2, a3, b1, b2, b3);
}