// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        bool result;
        string temp(str1);
        if(str1.size()!=str2.size())
            return false;

        if(leftRotate(str1, 2) == str2)
            return true;
        
        if(rightRotate(str1) == str2)
            return true;
        
        return false;
    }

    string leftRotate(string str, int d)
    {
        reverse(str.begin(), str.begin()+d);
        reverse(str.begin()+d, str.end());
        reverse(str.begin(), str.end());
        return str;
    }

    string rightRotate(string str)
    {
        string temp = leftRotate(str, str.size()-2);
        return temp;
    }

};


// { Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}
  // } Driver Code Ends