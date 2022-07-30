// CPP program for the above approach

#include <bits/stdc++.h>

using namespace std;

bool isAmicable(string str)
{
    map<char, int> mp;
    for(int i = 0;i<str.size();i++)
    {
        mp[str[i]]++;
    }
    for(auto it: mp)
    {
        if(it.second<2)
            return false;
    }

    return true;
}

vector<string> printSubstrings(string str)
{
    vector<string> ans;
	// First loop for starting index
	for (int i = 0; i < str.length(); i++) {
		string subStr;
		// Second loop is generating sub-string
		for (int j = i; j < str.length(); j++) {
			subStr += str[j];
			ans.push_back(subStr);
		}
	}
    return ans;
}

// Driver Code

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<string> SsubStr;
        string str;
        cin>>str;
        int counter = 0;
        for (int i = 0; i < str.length(); i++) {
		string subStr;
		// Second loop is generating sub-string
		for (int j = i; j < str.length(); j++) {
			subStr += str[j];
			if(isAmicable(subStr))
                counter++;
		}
	    }
        cout<<counter<<endl;
    }
	return 0;
	// this code is contributed by defcdr
}