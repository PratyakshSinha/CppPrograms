// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int findElement(int arr[], int n);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++)
            cin >> a[i];
        cout << findElement(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends

int findElement(int arr[], int n)
{
    int large[n], small[n], mx = INT_MIN, mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        mx = max(mx, arr[i]);
        large[i] = mx;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        mn = min(mn, arr[i]);
        small[i] = mn;
    }
    for (int i = 1; i < n - 1; i++)
    {
        if (small[i + 1] >= arr[i] && arr[i] >= large[i - 1])
            return arr[i];
    }
    return -1;
}