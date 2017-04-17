#include <iostream>
using namespace std;

void prime(int num)
{
	int checknum = 2;
	while (num >= 1)
	{
		int divider = 2, counter = 0;
		while(divider <= checknum)
		{
			if(checknum % divider == 0)
			{
				counter++;
			}
			divider++;
		}
		if (counter == 1)
		{
			cout << checknum << endl;
			num--;
		}
		checknum++;
	}
}


int main()
{
	int num;
	cout << endl;
	cout << "Enter the number of prime numbers: ";
	cin >> num;
	prime(num);
	cout << endl;
}