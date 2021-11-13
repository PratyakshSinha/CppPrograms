#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int rows, cols,q,i=0;
    int* rf = new int[q];
    int* cf = new int[q];
    
    cin>>rows>>q;
    int** table = new int*[rows];
    while(i<rows){
        cin>>cols;
        for(int j = 0;j<rows;j++){
            table[j] = new int[cols];
        }
        for(int j = 0;j<rows;j++)
        {
            for (int k = 0; k < cols; k++)
            {
                cin>>table[j][k];
            }
        }
        i++;
    }
    for(i=0;i<q;i++){
        cin>>rf[i]>>cf[i];
    }
    
    for(i=0;i<q;i++){
        cout<<table[rf[i]][cf[i]]<<endl;
    }
    
    for(int i = 0; i<rows;i++){
        delete[] table[i];
    }
    delete[] table;
    table = NULL;
    delete[] rf;
    rf = NULL;
    delete[] cf;
    cf = NULL;
    
    return 0;
}
