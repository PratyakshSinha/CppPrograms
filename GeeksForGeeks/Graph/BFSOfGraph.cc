//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
const int N = 1e5+2;

class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    bool vis[N] = {0}; // needs to be in the class so that it is initialized for every object in each test case rather than just being 
                       // global constant 
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        queue<int> q;
        vector<int> returnVector;
        q.push(0);
        vis[0] = true;

        while(!q.empty())
        {
            int node = q.front();
            q.pop();
            returnVector.push_back(node);
            for(auto it:adj[node])
            {
                if(!vis[it])
                {
                    vis[it] = true;
                    q.push(it);
                }
            }
        }

        return returnVector;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends