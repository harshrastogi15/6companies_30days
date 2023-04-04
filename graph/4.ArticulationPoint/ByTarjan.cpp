// Articualtion Point using Tarjan Algo

// class Solution {
//     int cnt = 1;
//     void point(vector<int> adj[], int n, int parent, vector<int>& tin, vector<int> &low, vector<int> &vec){
//         tin[n]=low[n]=cnt;
//         cnt++;
//         int child = 0;
//         for(auto i:adj[n]){
//             if(i==parent)continue;
//             if(tin[i]==0){
//                 point(adj,i,n,tin,low,vec);
//                 low[n] = min(low[i],low[n]);
//                 if(low[i] >= tin[n] && parent != -1){
//                     vec[n]=1;
//                 }
//                 child++;
//             }else{
//                 low[n] = min(low[n],tin[i]);
//             }
//         }
//         if(child>1 && parent==-1){
//             vec[n]=1;
//         }
//     }
//   public:
//     vector<int> articulationPoints(int V, vector<int>adj[]) {
//         // Code here
//         vector<int> tin(V,0),low(V,0),vec(V,0),ans;
        
//         point(adj,0,-1,tin,low,vec);
        
//         for(int i=0;i<V;i++){
//             if(vec[i]==1){ans.push_back(i);}
//         }
//         if(ans.size()==0){return {-1};}
//         return ans;
        
//     }
// };
