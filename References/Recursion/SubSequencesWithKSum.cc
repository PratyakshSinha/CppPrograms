#include<bits/stdc++.h>
using namespace std;

void SubSequencesWithSumK(int i, vector<int>& ds, int arr[], int s, int Sum, int n)
{
    if(i == n)
    {
        if(s == Sum)
        {
            for(auto it: ds)
                cout<<it<<" ";
            cout<<endl;
        }
        return;
    }

    ds.push_back(arr[i]);
    s+=arr[i];
    SubSequencesWithSumK(i+1, ds, arr, s, Sum, n);

    s-=arr[i];
    ds.pop_back();
    SubSequencesWithSumK(i+1, ds, arr, s, Sum, n);
}

bool OneSubSequenceWithSumK(int i, vector<int>& ds, int arr[], int s, int Sum, int n)
{
    if(i == n)
    {
        if(s == Sum)
        {
            for(auto it: ds)
                cout<<it<<" ";
            cout<<endl;
            return true;
        }
        return false;
    }

    ds.push_back(arr[i]);
    s+=arr[i];
    if(OneSubSequenceWithSumK(i+1, ds, arr, s, Sum, n))
        return true;

    s-=arr[i];
    ds.pop_back();
    if(OneSubSequenceWithSumK(i+1, ds, arr, s, Sum, n))
        return true;
    
    return false;
}

int main()
{
    int arr[] = {1,2,1};
    vector<int> ds;
    int Sum = 2;
    cout<<"All Sub Sequences:\n";
    SubSequencesWithSumK(0, ds, arr, 0, Sum, 3);
    cout<<"One Sub Sequence: ";
    OneSubSequenceWithSumK(0, ds, arr, 0, Sum, 3);
    return 0;
}