#include<iostream>

int computeFibonacci(int n)
    {
        int first = 0, second = 1;
        int fibonacciSum = 0;
        while(n>1)
            {
                fibonacciSum = first + second;
                first = second;
                second = fibonacciSum;
                n--;
            }
        return fibonacciSum;
    }

int main()
    {
        int n;
        std::cin >> n;
        std::cout<<computeFibonacci(n);
        return 0;
    }