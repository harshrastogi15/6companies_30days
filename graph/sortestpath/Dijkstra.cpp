// O(E*logV) E->edges V->vertex 

// class Solution
// {
// 	public:
// 	//Function to find the shortest distance of all the vertices
//     //from the source vertex S.
//     vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
//     {
//         // Code here
//         vector<int> ans(V,INT_MAX);
        
//         ans[S] = 0 ;
//         set<pair<int,int>> st;
//         st.insert({0,S});
        
//         while(!st.empty()){
//             auto it = *st.begin();
//             st.erase(it);
//             S = it.second;
//             for(auto i:adj[S]){
//                 if(ans[i[0]]>ans[S]+i[1]){
//                     ans[i[0]]=ans[S]+i[1];
//                     st.insert({ans[i[0]],i[0]});
//                 }
//             }
//         }
        
//         return ans;
//     }
// };
