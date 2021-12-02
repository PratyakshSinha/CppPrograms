#include<iostream>
#include<cmath>
using namespace std;

int digitCounter(int digit, long long int number)
    {
        int noOfOccurrences = 0;
        float temp;
        while(number!=0)
            {
                temp = number%10;
                if(temp==digit)
                        noOfOccurrences++;
                number = number/10;
            }

        return noOfOccurrences;
    }

int main()
    {
        int digit;
        long double number;
        cin>>number>>digit;
        cout<<digitCounter(digit, number);
        return 0;
    }