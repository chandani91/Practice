#include <iostream>
using namespace std;

void fibonacci(int fibonacci_num) 
{   
    int n1 = 0, n2 = 1, n3 = 1;   
    while (fibonacci_num > 0)
    {
        cout << n3 << endl; // "1" needs to be printed twice
        n3 = n2 + n1; //general formula for fibonacci series
        n1 = n2;       
        n2 = n3;
        fibonacci_num--; 
    }
}

int main() 
{
    int fibonacci_num;
    cout << "Enter the number of fibonacci you want to display: " ;
    cin >> fibonacci_num;
    cout << "Fibonacci series of " << fibonacci_num << " numbers:" << endl;
    fibonacci(fibonacci_num);
}
