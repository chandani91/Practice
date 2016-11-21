#include <iostream>
using namespace std;

int fibonacci(int i) 
{      

    if(i == 0)
        return 0;
    else if (i == 1)
        return 1;
    else
        return fibonacci(i-1) + fibonacci(i-2);
}

int main() 
{
    int num;
    cout << "Enter the number of fibonacci you want to display: " ;
    cin >> num;
    cout << "Fibonacci series of " << num << " numbers:" << endl;
    for(int i = 1; i <= num; i++)
        cout << fibonacci(i) << " ";
    cout << endl;
    return 0;
}
