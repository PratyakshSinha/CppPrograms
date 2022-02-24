// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    int romanToDecimal(string &str)
    {
        int i = 0;
        int n = str.length();
        int sum = 0;
        for (i = 0; i < n - 1; i++)
        {
            if (value(str[i]) >= value(str[i + 1]))
            {
                sum += value(str[i]);
            }
            else
            {
                sum = sum - value(str[i]);
                // sum = sum + value(str[i+1]);
            }
        }
        sum = sum + value(str[n - 1]);
        if (n == 1)
            return value(str[0]);

        return sum;
        // code here
    }

    int value(char ch)
    {
        if (ch == 'I')
            return 1;
        if (ch == 'V')
            return 5;
        if (ch == 'X')
            return 10;
        if (ch == 'L')
            return 50;
        if (ch == 'C')
            return 100;
        if (ch == 'D')
            return 500;
        if (ch == 'M')
            return 1000;

        return 1000;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}