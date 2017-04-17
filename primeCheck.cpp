#include <iostream>
using namespace std;

int primecheck()
 {
 	int counter =0, divider = 2;
 	while(divider <= num)
		{
			if(num % divider == 0)
			{
				counter++;
			}
			divider++;
		}
		if (counter == 1)
			cout << num <<endl;
 }

int prime(num)
{
	while (num >= 2)
	{
		primecheck(num);
		num--;
	}
}

int main()
{
	int num;
	cout << "Enter a number: ";
	cin >> num;
	prime(num);
}
