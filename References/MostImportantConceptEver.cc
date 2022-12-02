//C++ Program to how to take an array as an input when number of elements in the array is not given
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr;
    int temp;
    while(cin>>temp)    //while entering the elements of the array when you are done entering you must input '\0' or null character so 
    {                   //that the compilers knows the input has finished
        arr.push_back(temp);
    }
    int n = arr.size();
    for(int i = 0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}