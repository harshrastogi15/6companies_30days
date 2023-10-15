// Kruskal Algo for MST
// O(ElogE)+O(E*4*alpha)

// class Solution
// {
//     vector<int> parent;
//     vector<int> rank;

//     int findparent(int n){
//         if(n==parent[n]){
//             return n;
//         }
//         return parent[n]=findparent(parent[n]);
//     }

//     void findunion(int u, int v){
//         u = findparent(u);
//         v = findparent(v);
//         if(rank[u]<rank[v]){
//             parent[u]=v;
//         }else if(rank[v]<rank[u]){
//             parent[v]=u;
//         }else{
//             parent[u]=v;
//             rank[v]++;
//         }
//     }

// 	public:
// 	//Function to find sum of weights of edges of the Minimum Spanning Tree.
//     int spanningTree(int V, vector<vector<int>> adj[])
//     {
//         // code here

//         // int n = adj.size();

//         parent.resize(V,0);
//         rank.resize(V,0);

//         vector<vector<int>> edge;
//         for(int i=0;i<V;i++){
//             parent[i]=i;
//             for(auto j:adj[i]){
//                 edge.push_back({j[1],i,j[0]});
//             }
//         }

//         sort(edge.begin(),edge.end());

//         int cost = 0;
//         for(int i=0;i<edge.size();i++){
//             int u = edge[i][1];
//             int v = edge[i][2];
//             int c = edge[i][0];
//             if(parent[u]!=parent[v]){
//                 cost += c;
//                 findunion(u,v);
//             }
//         }
//         return cost;
//     }
// };
