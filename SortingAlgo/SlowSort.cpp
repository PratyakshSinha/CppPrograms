// C++ program to implement Slow sort
#include <bits/stdc++.h>
using namespace std;

// Function for swap two numbers using
// pointers
void swap(int* xp, int* yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

// Function that implements Slow Sort
void slowSort(int A[], int i, int j)
{
	// Base Case
	if (i >= j)
		return;

	// Middle value
	int m = (i + j) / 2;

	// Recursively call with left half
	slowSort(A, i, m);

	// Recursively call with right half
	slowSort(A, m + 1, j);

	// Swap if first element
	// is lower than second
	if (A[j] < A[m]) {
		swap(&A[j], &A[m]);
	}

	// Recursively call with whole
	// array except maximum element
	slowSort(A, i, j - 1);
}

// Function to print the array
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

// Driver Code
int main()
{
	int arr[] = { 100,90,80,70,60,50,40,30,20,10,0};
	int N = sizeof(arr) / sizeof(arr[0]);

	// Function call
	slowSort(arr, 0, N - 1);

	// Display the sorted array
	printArray(arr, N);

	return 0;
}
