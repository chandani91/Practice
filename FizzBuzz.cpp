#include <iostream>
using namespace std;

void fizzbuzz(int num)
{
	for (int i = 1; i <= num; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			cout << "FizzBuzz" << endl;
		else if (i % 3 == 0)
			cout << "Fizz" << endl;
		else if (i % 5 == 0)
			cout << "Buzz" << endl;
		else
			cout << i << endl;

	}
}

int main()
{
	int num;
	cout << "Enter a number " << endl;
	cin >> num;
	fizzbuzz(num);
}