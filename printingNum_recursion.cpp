#include <iostream>
using namespace std;


void counter(int i)
{
	if(i < 10)	
	{
		i++;
		cout << i << " ";
		counter(i);
	}
}


int main() 
{	
	int i = 0;
	counter(i);
	cout << endl;
	return 0;
}