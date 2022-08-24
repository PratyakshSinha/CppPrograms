#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10] = {5,3,9,1,3,2,15,4,6,11};
    sort(arr, arr+10);
    cout<<"Max - [";
    for(int i = 9;i>6;i--)
    {
        cout<<arr[i]<<",";
    }
    cout<<"]"<<endl;
    cout<<"Min - [";
    for(int i = 0;i<3;i++)
        cout<<arr[i]<<",";
    cout<<"]";
    return 0;
}