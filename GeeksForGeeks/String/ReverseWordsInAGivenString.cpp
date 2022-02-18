// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        string temp = "";
        string reverseWords = "";
        int words=1;
        for(int i = 0;i<S.size();i++)
        {
            if(S[i]=='.')
                words++;                                      
        }
        int i = 0;
        while(words--)
        {
            while(S[i]!='.')
            {
                temp = temp+S[i];
                i++;
            }
            if(words!=1)
                temp = temp + '.';
            
        }
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
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}  // } Driver Code Ends