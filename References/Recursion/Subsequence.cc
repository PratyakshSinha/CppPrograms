#include<bits/stdc++.h>
using namespace std;

int COUNT = 0;

void printArray(vector<int> temp)
{
    if(temp.size() == 0)
    {
        cout<<"{}";
        return;
    }
    cout<<"{";
    for(int i = 0;i<temp.size()-1;i++)
    {
        cout<<temp[i]<<", ";
    }
    cout<<temp[temp.size()-1]<<"}";
}

void printSubSequence(int i, vector<int>& arr, vector<int> sq)
{
    if(i>=arr.size())
    {
        cout<<endl;
        printArray(sq);
        COUNT++;
        return;
    }
    sq.push_back(arr[i]);
    printSubSequence(i+1, arr, sq);
    sq.pop_back();
    printSubSequence(i+1, arr, sq);
}

int main()
{
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
    vector<int> ds;
    cout<<"[";
    printSubSequence(0, arr, ds);
    cout<<endl<<"]";
    cout<<"\nNumber of Sub Sequences:"<<COUNT;
    return 0;
}