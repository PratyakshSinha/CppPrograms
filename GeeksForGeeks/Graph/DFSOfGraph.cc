//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

    const int N = 1e5+2;
// } Driver Code Ends
class Solution {
  public:

    bool vis[N] = {0};
    vector<int> returnVector;
    void dfs(int node, vector<int> adj[])
    {
        //preorder
        vis[node] = true;
        returnVector.push_back(node);

        //inorder
        for(auto it: adj[node])
        {
            if(vis[it]);
            else
            {
                dfs(it, adj);
            }
        }
    }


    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        dfs(adj[0][0], adj);
        return returnVector;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends