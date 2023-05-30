// Find max flow in the graph from vertex 1 to N
// find one path to vertext 1 to N
// then in that path find minimum flow value
// substract it from that edges used in path
// again try to find next path until all path are not find

// Time Complexity : O(|V| * E^2) ,where E is the number of edges and V is the number of vertices.
// Space Complexity :O(V) , as we created queue.

// class Solution
// {
//     int n;
//     bool bfs(vector<vector<int>> &gp, int s,int t, vector<int> &parent){
//         vector<int> vis(n+1,0);
//         queue<int> q;
//         q.push(s);
//         parent[s]=-1;
//         while(!q.empty()){
//             s = q.front();
//             q.pop();
//             for(int i=1;i<n+1;i++){
//                 if(!vis[i] && gp[s][i]>0){
//                     if(i==t){
//                         parent[i]=s;
//                         return true;
//                     }
//                     q.push(i);
//                     vis[i]=1;
//                     parent[i]=s;
//                 }
//             }
//         }
//         return false;
//     }
// public:
//     int findMaxFlow(int N,int M,vector<vector<int>> Edges)
//     {
//         // code here
//         n = N;
//         vector<vector<int>> gp(n+1,vector<int> (n+1,0));
//         for(int i=0;i<M;i++){
//             gp[Edges[i][0]][Edges[i][1]] += Edges[i][2];
//             gp[Edges[i][1]][Edges[i][0]] += Edges[i][2];
//         }
//         vector<int> parent(n+1,-1);
//         int flow = 0;
//         while(bfs(gp,1,n,parent)){
//             int maxflow = INT_MAX;
//             for(int j=N;j!=1;j = parent[j]){
//                 maxflow = min(maxflow,gp[parent[j]][j]);
//             }
//             flow += maxflow;
//             for(int j=N;j!=1;j = parent[j]){
//                 gp[parent[j]][j] -= maxflow;
//                 // gp[j][parent[j]] += maxflow;
//             }
//         }
//         return flow;
//     }
// };
