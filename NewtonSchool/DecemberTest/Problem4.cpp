#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int gcd(int a, int b)
    {
		if(a==b)
        {
            return a;
        }
    if(a%b==0)
        {
            return a;
        }
    else if(b%a == 0)
        {
            return b;
        }
        if(b==0)
            return a;
        return(b,a%b);
    }

int main() {

	int x, t1, t2;
   	vector<pair<int, int>> p;
	vector<int> count = {0};
   	cin>>x;
   	for(int i = 0; i < x;i++)
		{
			cin>>t1>>t2;
			p.push_back(make_pair(t1, t2));
		}
	for (int i = 0; i < x; i++)
	{
		for (int j = 2; j < p[i].first; j++)
		{
			for (int k = 2; k < p[i].second; k++)
			{
				if((j*k/gcd(j,k)) == p[i].first)
				count[i]++;
			}

			
		}
		
	}
	for (int i = 0; i < x; i++)
	{
		cout<<count[i]<<endl;
	}
	
	return 0;
}
