#include<iostream>
#include <string>
#include<sstream>
using namespace std;

string removeZero(string str)
{
    int i = 0;
    while (str[i] == '0')
       i++;
    str.erase(0, i);
  
    return str;
}

void printSum(long long int x, int size)
    {
        int evenSum = 0, oddSum = 0, i=0;
        long long int temp = x;
        
        while(x!=0)
            {
                temp = x%10;
                if(i%2==0)
                    {
                        evenSum = evenSum+temp;
                    }
                else
                    {
                        oddSum = oddSum+temp;
                    }
                x = x/10;
                i++;
            }
        cout<<evenSum<<endl<<oddSum;
    }

int main()
    {
        string s;
        long long int n;
        int size;
        cin>>n;
        if(n==0)
            {
                cout<<"0";
                cout<<"0";
                return 0;
            }
        s = to_string(n);
        s = removeZero(s);
        size = s.length();
        stringstream obj;
        obj<<s;
        obj>>n;
        printSum(n,size);
        return 0;
    }