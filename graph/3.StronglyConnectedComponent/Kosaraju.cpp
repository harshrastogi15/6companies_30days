// Kosaraju Algo
// 1. find topological sort using dfs and store it in stack
// 2. reverse the graph
// 3. pop one by one from stack and perform dfs 
// 

// class Solution
// {
//     void topo(int n, vector<vector<int>>& adj, stack<int> &st, vector<int> &vis ){
//         vis[n]=1;
//         for(auto &i:adj[n]){
//             if(!vis[i]){
//                 topo(i,adj,st,vis);
//             }
//         }
//         st.push(n);
//     }

//     void dfs(int n, vector<vector<int>>& adj, vector<int> &vis ){
//         vis[n]=1;
//         for(auto &i:adj[n]){
//             if(!vis[i]){
//                 dfs(i,adj,vis);
//             }
//         }
//     }
    
// 	public:
// 	//Function to find number of strongly connected components in the graph.
//     int kosaraju(int V, vector<vector<int>>& adj)
//     {
//         //code here
//         stack<int> st;
//         vector<int> vis(V,0);
//         for(int i=0;i<V;i++){
//             if(!vis[i]){
//                 topo(i,adj,st,vis);
//             }
//         }
//         vector<vector<int>> dp(V);
        
//         for(int i=0;i<V;i++){
//             vis[i]=0;
//             for(auto j:adj[i]){
//                 dp[j].push_back(i);
//             }
//         }
//         int cnt= 0;
//         while(!st.empty()){
//             int i = st.top();st.pop(); 
//             if(!vis[i]){
//                cnt++;
//                 dfs(i,dp,vis);
//             }
//         }
//         return cnt;
//     }
    
// };