// To find bridges in Graph
// Create two array 
// insert -> time of arriving a node
// low -> minimum time to reach a node
// if (insert[parent] < low[child]){then it is bridge} 

// class Solution {
//     vector<vector<int>> ans;
//     int time;
    
//     void dfs(vector<int> gp[], int node, int parent,vector<int> &vis, vector<int> &insert,vector<int> &low){
//         vis[node]=1;
//         insert[node]=low[node]=time++;
//         for(auto i:gp[node]){
//             if(i==parent){
//                 continue;
//             }
//             if(!vis[i]){
//                 dfs(gp,i,node,vis,insert,low);
//                 low[node]= min(low[node],low[i]);
//                 if(insert[node]<low[i]){
//                     ans.push_back({node,i});
//                 }
//             }else{
//                 low[node]= min(low[node],insert[i]);
//             }
//         }
//     }
    
// public:
//     vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
//         vector<int> gp[n];
//         time =0;
//         for(int i=0;i<connections.size();i++){
//             gp[connections[i][0]].push_back(connections[i][1]);
//             gp[connections[i][1]].push_back(connections[i][0]);
//         }
//         vector<int> vis(n,0),insert(n,0),low(n,0);
//         dfs(gp,0,-1,vis,insert,low);
        
//         return ans;
//     }
// };