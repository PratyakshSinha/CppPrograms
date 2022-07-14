#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(string s, int i, int j)
{
    if(j == 0 && i == s.size()-1)
        return true;
    
    if(s[i] == s[j])
    {
        return checkPalindrome(s, ++i, --j);
    }

    if(s[i] != s[j])
        return false;
}

int main()
{
    int x = 10, y =20;
    x = (x++)+(++y);
    cout<<x<<" "<<y;
    return 0;
}