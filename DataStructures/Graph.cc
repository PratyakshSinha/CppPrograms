#include<bits/stdc++.h>
using namespace std;

void inputAdjMatrix(vector<vector<int>>& adj, int m)
{
    for(int i = 0;i<m;i++)
    {
        int u, v;
        cin>>u>>v;
        adj[u][v] = 1;
        adj[v][u] = 1;  // Remove this line for a directed graph.
    }
}



void inputAdjList(vector<int> (&adjLis)[], int m)
{
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin>>u>>v;
        adjLis[u].push_back(v);
        adjLis[v].push_back(u); // Remove this line for a directed graph.
    }
}

int main()
{
    int n, m;
    cin>>n>>m;
    //Graph representation in form of adjacency matrix
    //int adjMat[n+1][m+1] had to be used instead of vector of same size but due to function calling this vector was used
    vector<vector<int>> adjMat(n+1, vector<int>(m+1, 0));
    inputAdjMatrix(adjMat, m);


    return 0;
}