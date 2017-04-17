#include <iostream>
using namespace std;

int prime(int checkNum, int num, int counter)
{
	if(checkNum >= num)
	{
		if(checkNum % num == 0)
		{
			counter++;
		}
		num++;
		prime(checkNum, num, counter);
	}
		return counter;
}


int main()
{
	int checkNum;
	cout << "Enter a number: ";
	cin >> checkNum;
	cout << prime(checkNum, 2, 0);
	if(prime(checkNum, 2, 0) == 1)
		cout << "prime" <<endl;
	else
		cout << "not prime" <<endl;
}