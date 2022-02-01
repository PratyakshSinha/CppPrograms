#include <cmath>
#include <cstdio>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>

/*
2 2
3 1 5 4
5 1 2 8 9 3
0 1
1 3
*/
using namespace std;

void print(std::vector<int> const &input)
{
    for (int i = 0; i < input.size(); i++) {
        std::cout << input.at(i) << ' ';
    }
}
 

int main() {
    vector<vector<long int>> v;
    map<int, int> query;
    int n, q, k, i, j, t1, t2;
    cin>>n>>q;
    v.resize(n);
    for(i=0;i<n;i++)
    {
        cin>>k;
        for(j=0; j<k; j++)
        {
            cin>>t1;
        }
    }

    for(i = 0;i<q;i++)
    {
        cin>>t1>>t2;
        query.insert(pair<int, int>(t1,t2));
    }
    
    for(auto pair: query)
    {
        cout<<v[pair.first][pair.second]<<endl;
    }
    
    return 0;
}
