// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
public:
    string rremove(string s)
    {
         int i=0,n=s.size();
     string temp;
     while(i<n)
     {
         int j=i+1;
         while(s[i]==s[j]&&j<n)
         j++;
         if(j==i+1)temp+=s[i];
         i=j;
     }
     if(s.size()==temp.size())
     return temp;
     else
     return rremove(temp);
    }
};

// { Driver Code Starts.

int main() {
    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);
        Solution ob;
        cout << ob.rremove(s) << "\n";
    }
    return 0;
}  // } Driver Code Ends