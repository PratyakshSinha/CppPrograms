// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
    void swap(int* a, int* b)
    {
        int t = *a;
        *a = *b;
        *b = t;
    }

    int partition (int arr[], int low, int high)
    {
        int pivot = arr[high]; // pivot
        int i = (low - 1); // Index of smaller element

        for (int j = low; j <= high- 1; j++)
        {
            // If current element is smaller than or
            // equal to pivot
            if (arr[j] <= pivot)
            {
                i++; // increment index of smaller element
                swap(&arr[i], &arr[j]);
            }
        }
        swap(&arr[i + 1], &arr[high]);
        return (i + 1);
    }

    void quickSort(int arr[], int low, int high)
    {
        if (low < high)
        {
            /* pi is partitioning index, arr[p] is now
            at right place */
            int pi = partition(arr, low, high);

            // Separately sort elements before
            // partition and after partition
            quickSort(arr, low, pi - 1);
            quickSort(arr, pi + 1, high);
        }
    }

	int countTriplet(int arr[], int n)
	{
	    int answer = 0;
        sort(arr, arr+n);
        for (int i = n-1; i >= 0; i--)
        {
            int sp = 0, ep = i-1;
            while(sp<ep)
            {
                if(arr[sp]+arr[ep]==arr[n-1])
                {
                    sp++;
                    ep--;
                    answer++;
                }
                else if(arr[sp]+arr[ep]<=arr[n-1])
                {
                    sp++;
                }
                else if(arr[sp]+arr[ep]>=arr[n-1])
                {
                    ep--;
                }
            }
        }
        return answer;
	}
};

// { Driver Code Starts.


int main() 
{
   	
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for(int i = 0; i < n; i++)
        	cin >> arr[i];

        Solution ob;
        cout << ob.countTriplet(arr, n) << "\n";

    }

    return 0;
}  // } Driver Code Ends