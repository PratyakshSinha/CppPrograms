/* C program to implement Pigeonhole Sort */
#include <bits/stdc++.h>
#include<cstdlib>
#include<iostream>
using namespace std;

/* Sorts the array using pigeonhole algorithm */
void pigeonholeSort(int arr[], int n)
{
	// Find minimum and maximum values in arr[]
	int min = arr[0], max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] < min)
			min = arr[i];
		if (arr[i] > max)
			max = arr[i];
	}
	int range = max - min + 1; // Find range

	// Create an array of vectors. Size of array
	// range. Each vector represents a hole that
	// is going to contain matching elements.
	vector<int> holes[range];

	// Traverse through input array and put every
	// element in its respective hole
	for (int i = 0; i < n; i++)
		holes[arr[i]-min].push_back(arr[i]);

	// Traverse through all holes one by one. For
	// every hole, take its elements and put in
	// array.
	int index = 0; // index in sorted array
	for (int i = 0; i < range; i++)
	{
	vector<int>::iterator it;
	for (it = holes[i].begin(); it != holes[i].end(); ++it)
			arr[index++] = *it;
	}
}

/* int random()
{
    int max;
    max = 500; //set the upper bound to generate the random number
    srand(time(0));
    return rand()%max;
} */

// Driver program to test the above function
int main()
{
	int arr[100];
    for (int i = 0; i < 100; i++)
    {
        arr[i]=rand()%500;
    }

    for ( int i = 0; i < 100 ; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
	int n = sizeof(arr)/sizeof(arr[0]);

	pigeonholeSort(arr, n);
    
	printf("\nSorted order is : ");
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);

	return 0;
}
