#include <cmath>
#include <cstdio>
#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>

using namespace std;

void print(std::vector<int> const &input)
{
    for (int i = 0; i < input.size(); i++) {
        std::cout << input.at(i) << ' ';
    }
}

int main() {
    vector<vector<long int>> v;
    unordered_multimap<int, int> query;
    int n, q, k, i, j, t1, t2;
    cin>>n>>q;
    v.resize(n);    //2D vector must be initialized
    for(i=0;i<n;i++)
    {
        cin>>k;
        for(j=0; j<k; j++)
        {
            cin>>t1;
            v[i].push_back(t1);
        }
    }

    for(i = 0;i<q;i++)
    {
        cin>>t1>>t2;
        cout<<v[t1][t2]<<endl;
    }
        
    return 0;
}
