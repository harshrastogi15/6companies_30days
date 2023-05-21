// using m coloring problem where m = 2;
// A graph is bipartite if the nodes can be partitioned into two independent sets A and B
// such that every edge in the graph connects a node in set A and a node in set B.

// class Solution {

//     bool bfs(vector<vector<int>> graph, int node,vector<int> &color){
//         queue<int> q;
//         q.push(node);
//         color[node]=0;
//         while(!q.empty()){
//             node=q.front();
//             q.pop();
//             for(auto i:graph[node]){
//                 if(color[i]==-1){
//                     q.push(i);
//                     color[i]=1-color[node];
//                 }else if(color[i]==color[node]){
//                     return false;
//                 }
//             }
//         }

//         return true;
//     }

// public:
//     bool isBipartite(vector<vector<int>>& graph) {
//         int n = graph.size();
//         vector<int> color(n,-1);
//         for(int i=0;i<n;i++){
//             if(color[i]==-1){
//                 if(!bfs(graph,i,color)) return false;
//             }
//         }
//         return true;
//     }
// };
