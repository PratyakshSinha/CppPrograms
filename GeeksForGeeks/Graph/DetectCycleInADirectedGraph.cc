//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool isCycleUtil(int src, vector<int> adj[], vector<bool> &vis, vector<int> &stack)
    {
        stack[src] = true;
        if(!vis[src])
        {
            vis[src] = true;
            for(auto it:adj[src])
            {
                if(!vis[it] && isCycleUtil(it, adj, vis, stack))
                    return true;
                if(stack[it])
                    return true;
            }
        }
        stack[src] = false;
        return false;
    }

    // Function to detect cycle in an undirected graph.
    bool isCyclic(int V, vector<int> adj[]) {
        vector<int> stack(V, 0);
        vector<bool> vis(V, false);
        bool cycle = false;
        for(int i = 0;i<V;i++)
        {
            if(!vis[i] && isCycleUtil(i, adj, vis, stack))
                cycle = true;
        }
        return cycle;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends