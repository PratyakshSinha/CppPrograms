/*
Hacker rank problem Von Neuman loves binary
*/

#include<iostream>
#include<math.h>
using namespace std;

int digitCounter(int x)
    {
        int noOfDigits=0;
        while(x!=0)
            {
                noOfDigits++;
                x=x/10;
            }
        return noOfDigits;
    }

int* convertToDecimal(int n, long long int A[])
    {   
        int noOfDigits, digit;
        long long int currentNumber;
        static int decimalArray[1000] = { };
        for(int i=0;i<n;i++)
            {
                currentNumber = A[i];
                noOfDigits = digitCounter(currentNumber);
                for(noOfDigits;noOfDigits>=0;noOfDigits--)
                    {   
                        digit = currentNumber%10;
                        decimalArray[i] = decimalArray[i] + digit*pow(2,noOfDigits);
                        currentNumber = currentNumber/10;
                    }
            }
        return decimalArray;
    }

int main()
    {
        int noOfBinaryNumbers;
        long long int binaryArray[1000];
        cin>>noOfBinaryNumbers;
        for(int i=0;i<noOfBinaryNumbers;i++)
            {
                cin>>binaryArray[i];
            }

        int* decimalNumber = convertToDecimal(noOfBinaryNumbers, binaryArray);
        for(int i=0;i<noOfBinaryNumbers;i++)
            {
                cout<<decimalNumber[i]<<endl;
            }
        return 0;
    }