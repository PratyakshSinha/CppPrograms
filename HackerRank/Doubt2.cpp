#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int Array[10000][30000],rf[10000],cf[30000];
    int n,q,k,i,j;
    cin>>n>>q;
    for(i=0;i<n;i++){
        cin>>k;
        for(j=0;j<k;j++){
            cin>>Array[i][j];
        }
    }
    for(i=0;i<q;i++){
            cin>>rf[i]>>cf[i];
    }
    for(i = 0; i < q;i++){
        cout<<Array[rf[i]][cf[i]];
    }
    return 0;
}