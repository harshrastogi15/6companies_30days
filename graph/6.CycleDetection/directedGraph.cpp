
// class Solution
// {
// public:
//     // Function to detect cycle in a directed graph.

//     bool dfs(vector<int> adj[], int node, vector<int> &vis, vector<int> &recStack)
//     {
//         vis[node] = 1;
//         recStack[node] = 1;
//         for (auto &i : adj[node])
//         {
//             if (!vis[i] && dfs(adj, i, vis, recStack))
//             {
//                 return true;
//             }
//             else if (recStack[i])
//             {
//                 return 1;
//             }
//         }
//         recStack[node] = 0;
//         return false;
//     }

//     bool isCyclic(int V, vector<int> adj[])
//     {
//         // code here

//         vector<int> vis(V, 0), recStack(V, 0);
//         for (int i = 0; i < V; i++)
//         {
//             bool ans = dfs(adj, i, vis, recStack);
//             if (ans)
//             {
//                 return true;
//             }
//         }
//         return false;
//     }
// };
