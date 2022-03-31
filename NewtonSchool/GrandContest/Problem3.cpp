#include<bits/stdc++.h>
using namespace std;

/*

Nutan was given a grid of size N×M. The rows are numbered from 1 to N, and the columns from 1 to M. Each cell of the grid has a value assigned to it; the value of cell (i, j) is Aij. He will perform the following operation any number of times (possibly zero):

He will select any path starting from (1,1) and ending at (N, M), such that if the path visits (i, j), then the next cell visited must be (i + 1, j) or (i, j + 1). Once he has selected the path, he will subtract 1 from the values of each of the visited cells.

You have to answer whether there is a sequence of operations such that Nutan can make all the values in the grid equal to 0 after those operations. If there exists such a sequence, print "YES", otherwise print "NO".

Input
The first line of the input contains a single integer T (1 ≤ T ≤ 10) — the number of test cases. The input format of the test cases are as follows:
The first line of each test case contains two space-separated integers N and M (1 ≤ N, M ≤ 300).
Then N lines follow, the ith line containing M space-separated integers Ai1, Ai2, ... AiM (0 ≤ Aij ≤ 109).

Output
Output T lines — the ith line containing a single string, either "YES" or "NO" (without the quotes), denoting the output of the ith test case. Note that the output is case sensitive.

Example
Sample Input:
3
1 1
10000
2 2
3 2
1 3
1 2
1 2

Sample Output:
YES
YES
NO
*/


int main()
{
    
}