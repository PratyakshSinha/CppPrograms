// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<char> S;
        //char ch;
        for(int i = 0;i<x.size();i++)
        {
            if(x[i] == '['||x[i] == '{'||x[i] == '(')
            {
                S.push(x[i]);
            }
            else if(x[i] == ']')
            {
                if(S.top() == '[')
                {
                    S.pop();
                }
                else
                    return false;
            }
            else if(x[i] == '}')
            {
                if(S.top() == '{')
                {
                    S.pop();
                }
                else
                    return false;
            }
            else if(x[i] == '(')
            {
                if(S.top() == ')')
                {
                    S.pop();
                }
                else
                    return false;
            }
        }
        if(S.empty()!=true)
            return false;
        return true;
    }

};

// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // } Driver Code Ends