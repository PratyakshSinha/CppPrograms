#include <bits/stdc++.h>
using namespace std;

int printFrequency(vector<int> vec)
{
	// Define an map
	map<int, int> M;

	// Traverse vector vec check if
	// current element is present
	// or not
	for (int i = 0; vec[i]; i++) {

		// If the current element
		// is not found then insert
		// current element with
		// frequency 1
		if (M.find(vec[i]) == M.end()) {
			M[vec[i]] = 1;
		}

		// Else update the frequency
		else {
			M[vec[i]]++;
		}
	}

	// Traverse the map to print the
	// frequency
    int MaxFrequency = 0 , MaxSecond = 0;
	for (auto& it : M) {
        if(it.second>MaxSecond)
        {
            MaxSecond = it.second;
            MaxFrequency = it.first;
        }
	}
    return MaxFrequency;
}

// Driver Code
int main()
{
	vector<int> vec = { 1, 2, 2, 3, 1, 4, 4, 4, 5};

	// Function call
	cout<<printFrequency(vec);
	return 0;
}
