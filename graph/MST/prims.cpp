// to find MST
//


// int spanningTree(int V, vector<vector<int>> adj[])
//     {
//         // code here
//         priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>> q;
//         q.push({0,0});
//         vector<int> vis(V,0);
//         int ans = 0;
//         while(!q.empty()){
//             auto it = q.top();
//             q.pop();
//             if(vis[it.second]){
//                continue; 
//             }
//             vis[it.second]=1;
//             // cout<<it.second<<"\n";
//             ans += it.first;
//             for(auto &i:adj[it.second]){
//                 if(!vis[i[0]]){
//                     q.push({i[1],i[0]});
//                 }
//             }
//         }
        
//         return ans;
//     }