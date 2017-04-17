#include <iostream>

void fibonacci_recursion(int n, int first, int second){

    int third = first + second;
        first = second;
        second = third;
        
        std::cout << third << " ";
        n--;

        if(n >= 1)
            fibonacci_recursion(n, first, second);
}

int main(){
    int n;
    std::cout << "Enter value of N:";
    std::cin >> n;

    fibonacci_recursion(n, 1, 0);

    std::cout << std::endl;

    return 0;
}