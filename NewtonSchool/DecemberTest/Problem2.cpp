#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
    
	int x, countA = 0, countB = 0, steps = 0;
    string s;
    cin>>x;
    cin>>s;
    for (int i = 0; i < x; i++)
    {
        if(s[i]=='a')
            countA++;
        else if(s[i]=='b')
            countB++;
    }
    if(countA<countB)
        {
            for (int i = 0; i < x; i++)
            {
                if(s[i] == 'a')
                    {
                        s[i] = 'b';
                        steps++;
                    }
            }
            
        }
    else
        {
            for (int i = 0; i < x; i++)
            {
                if(s[i] == 'b')
                    {
                        s[i] = 'a';
                        steps++;
                    }
            }
        }
    cout<<steps;
	return 0;
}
