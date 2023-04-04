// Disjoint set union 


// vector<int> parent;
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
//     //