#include <iostream>
using namespace std;

int factorial(int factorial_num) 
{
    if (factorial_num > 1) 
        return factorial_num * factorial(factorial_num - 1);
    else 
        return 1;
}

int main() 
{
    int factorial_num;
    cout << endl;
    cout << "Enter a number to find factorial: " ;
    cin >> factorial_num;
    cout << "Factorial = " << factorial(factorial_num) << endl;

    return 0;
}
