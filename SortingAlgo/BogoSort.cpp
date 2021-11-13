// C++ program to implement Bogo Sort
// using random shuffle
#include <bits/stdc++.h>
using namespace std;

// Function to check if array is
// sorted or not
bool isSorted(int a[], int N)
{
	while (--N > 1) {

		// Break condition for
		// unsorted array
		if (a[N] < a[N - 1])
			return false;
	}
	return true;
}

// Function to generate permutation
// of the array
void shuffle(int a[], int N)
{
	for (int i = 0; i < N; i++)
		swap(a[i], a[rand() % N]);
}

// Function to sort array using
// Bogo sort
void bogosort(int a[], int N)
{
	// If array is not sorted
	// then shuffle array again
	while (!isSorted(a, N)) {

		shuffle(a, N);
	}
}

// Function to print the array
    void printArray(int a[], int N)
{
	for (int i = 0; i < N; i++) {

		printf("%d ", a[i]);
	}
	printf("\n");
}

// Driver Code
int main()
{
	int arr[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i]=rand()%500;
    }

    for ( int i = 0; i < 10 ; i++)
    {
        cout<<arr[i]<<" ";
    }

	int N = sizeof arr / sizeof arr[0];

	// Function Call
	bogosort(arr, N);
	printf("\nArray after sorting:");
	printArray(arr, N);
	cin.get();
	return 0;
}
