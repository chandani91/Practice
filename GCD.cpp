#include <iostream>
using namespace std;

int gcd(int First_num, int Second_num){

	int i, gcd_divider = 1, counter;

	if (First_num < Second_num)
		counter = First_num;
	else 
		counter = Second_num;

	for (i = 2 ; i <= counter; i++){
			while (First_num % i == 0 && Second_num % i == 0){
				First_num = First_num / i;
				Second_num = Second_num / i;
				counter = counter / i;
				gcd_divider = gcd_divider * i;
			}	
	}
	return gcd_divider;
}

int main() {

	int First_num, Second_num;

	cout << "Enter the first number : " << endl;
	cin >> First_num;
	cout << "Enter the second number : " << endl;
	cin >> Second_num;
	cout << "The greatest common factor (GCD) is : " << gcd(First_num, Second_num) << endl;
}