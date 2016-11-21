#include <iostream>
#include <string>
using namespace std;

int factorial(int factorial_num)
{
	if(factorial_num > 1)
		return factorial_num * factorial(factorial_num-1);
	else
		return 1;
}

int main()
{
	int factorial_num;

	cout << "Enter a number: " << endl;
	cin >> factorial_num;
	cout << "Factorial is: " << factorial(factorial_num) << endl;

	return 0;
}
