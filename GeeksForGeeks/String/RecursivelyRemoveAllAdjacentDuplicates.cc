// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:

    // Provided by Vidhi Gambhir the Great
    string rremove(string s)
    {
        int n = s.length();

        if (s.length() <= 1)
        {
            return s;
        }
        int flag = 0;
        int i = 0;
        while (i < s.length())
        {
            int j = i + 1;
            if (s[i] == s[i + 1] && i + 1 < s.length())
            {
                while (j + 1 < s.length() && s[j] == s[j + 1])
                {
                    j++;
                }
                s.erase(i, j - i + 1);
            }
            else
            {
                i++;
            }
        }
        for (int i = 0; i <= s.size() - 1;)
        {
            if (s[i] == s[i + 1])
            {
                return rremove(s);
            }
            else
                i++;
        }
        return s;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--)
    {
        string s;
        getline(cin, s);
        Solution ob;
        cout << ob.rremove(s) << "\n";
    }
    return 0;
} // } Driver Code Ends