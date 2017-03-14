#include <iostream>
using namespace std;

void dec_bin(int quotent)
{
	int remainder, count = 0;
	int bin[100];

	while (quotent > 1)
	{
		remainder = quotent % 2;
		bin[count] = remainder;
		quotent = quotent / 2;
		count++;
	}
	
	if (quotent == 1)
		bin[count] = quotent;

	for(int i = count; i >= 0; i--)
		cout<<bin[i];
}

int main()
{
	int dec_num;
	cout << "Enter a decimal number to convert: " << endl;
	cin >> dec_num; 
	cout << "The binary form is: ";
	dec_bin(dec_num);
	cout << endl;
	return 0;
}