// { Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    stack<char> Stack;
        for(int i = 0;i<S.size();i++)
        {
            Stack.push(S[i]);
        }
        int i = 0;
        while(Stack.empty()!=true)
        {
            if(Stack.top()!=S[i])
                return 0;
            Stack.pop();
            i++;
        }

        return 1;
	}

};

// { Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}  // } Driver Code Ends