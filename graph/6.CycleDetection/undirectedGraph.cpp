
// class Solution
// {
// public:
//     bool dfs(vector<int> adj[], int node, int parent, vector<int> &vis)
//     {
//         vis[node] = 1;
//         for (auto &i : adj[node])
//         {
//             if (!vis[i])
//             {
//                 if (dfs(adj, i, node, vis))
//                 {
//                     return true;
//                 }
//             }
//             else if (i != parent)
//             {
//                 return 1;
//             }
//         }
//         return false;
//     }
//     // Function to detect cycle in an undirected graph.
//     bool isCycle(int V, vector<int> adj[])
//     {
//         // Code here
//         vector<int> vis(V, 0);
//         for (int i = 0; i < V; i++)
//         {
//             if (!vis[i])
//             {
//                 bool ans = dfs(adj, i, -1, vis);
//                 if (ans)
//                 {
//                     return true;
//                 }
//             }
//         }
//         return false;
//     }
// };
