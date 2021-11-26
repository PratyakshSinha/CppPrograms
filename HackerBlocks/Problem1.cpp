#include<iostream>
#include<string>
#include<sstream>
using namespace std;

string removeZero(string str)
{
    // Count trailing zeros
    int i = 0;
    while (str[i] == '0')
       i++;
  
    // The erase function removes i characters
    // from given index (0 here)
    str.erase(0, i);
  
    return str;
}

int main()
    {
        long long int x, y=0, temp=0, rev=0;
        string s;
        cin>>x;
        if(x==0)
            {
                cout<<5;
                return 0;
            }
        s = to_string(x);
        s = removeZero(s);
        stringstream obj;
        obj<<s;
        obj>>x;
        while(x != 0)
            {
                temp = x%10;
                if(temp == 0)
                    rev = rev*10 + 5;
                else
                    rev = rev*10 + temp;
                x = x/10;
            }
        while(rev!=0)
            {
                temp = rev%10;
                y = y*10 + temp;
                rev = rev/10;
            }
        cout<<y;
    }