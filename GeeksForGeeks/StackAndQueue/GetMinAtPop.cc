//{ Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;

stack<int> _push(int arr[],int n);

void _getMinAtPop(stack<int>s);

// } Driver Code Ends
//User function Template for C++


//Function to push all the elements into the stack.
stack<int> _push(int arr[],int n)
{
   stack<int> S;
   for(int i = 0;i<n;i++)
   {
       S.push(arr[i]);
   }
   
   return S;
}

//Function to print minimum value in stack each time while popping.
void _getMinAtPop(stack<int>s)
{
    list<int> L;
    stack<int> minStack;
    while(!s.empty())
    {
        L.push_back(s.top());
        s.pop();
    }
    s.push(L.front());
    minStack.push(L.front());
    

}


//{ Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    stack<int>mys=_push(arr,n);
	    _getMinAtPop(mys);
	    
	    cout<<endl;
	    
	}
	return 0;
}


// } Driver Code Ends