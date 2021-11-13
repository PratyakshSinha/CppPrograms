// C++ program to implement gravity/bead sort
#include <bits/stdc++.h>
using namespace std;

#define BEAD(i, j) beads[i * max + j]

// function to perform the above algorithm
void beadSort(int *r, int len)
{
	// Find the maximum element
	int max = r[0];
	for (int i = 1; i < len; i++)
		if (r[i] > max)
		max = r[i];

	// allocating memory
	unsigned char beads[max*len];
	memset(beads, 0, sizeof(beads));

	// mark the beads
	for (int i = 0; i < len; i++)
		for (int j = 0; j < r[i]; j++)
			BEAD(i, j) = 1;

	for (int j = 0; j < max; j++)
	{
		// count how many beads are on each post
		int sum = 0;
		for (int i=0; i < len; i++)
		{
			sum += BEAD(i, j);
			BEAD(i, j) = 0;
		}

		// Move beads down
		for (int i = len - sum; i < len; i++)
			BEAD(i, j) = 1;
	}

	// Put sorted values in array using beads
	for (int i = 0; i < len; i++)
	{
		int j;
		for (j = 0; j < max && BEAD(i, j); j++);
		r[i] = j;
	}
}

// driver function to test the algorithm
int main()
{
	int arr[1000];
    for (int i = 0; i <1000; i++)
    {
        arr[i]=rand()%1000;
    }

    for ( int i = 0; i <1000 ; i++)
    {
        cout<<arr[i]<<" ";
    }

	int len = sizeof(arr)/sizeof(arr[0]);

	beadSort(arr, len);

    cout<<"\nSorted Array: ";
	for (int i = 0; i < len; i++)
        cout<<arr[i]<<" ";
    cin.get();
	return 0;
}
