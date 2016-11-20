#include <iostream>
using namespace std;

void fibonacci(int num) 
{   
    int n1 = 0, n2 = 1, n3 = 1;   
    for(int i = 0; i < num; i++)
    {
        cout << n3 << endl; // "1" needs to be printed twice
        n3 = n2 + n1; //general formula for fibonacci series
        n1 = n2;       
        n2 = n3;
    }
}

int main() 
{
    int num;
    cout << "Enter the number of fibonacci you want to display: " ;
    cin >> num;
    cout << "Fibonacci series of " << num << " numbers:" << endl;
    fibonacci(num);
}
