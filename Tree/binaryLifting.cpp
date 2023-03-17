// A technique used to find the k-th ancestor of any node in a tree in O(logn).

// https://leetcode.com/problems/kth-ancestor-of-a-tree-node/description/

// class TreeAncestor {
// public:
//     int N;
//     vector<vector<int>> gp;
//     TreeAncestor(int n, vector<int>& parent) {
//         gp.resize(20,vector<int> (n,-1));
        
//         for(int i=0;i<n;i++){
//             gp[0][i]=parent[i];
//         }

//         for(int i=1;i<20;i++){
//             for(int j=0;j<n;j++){
//                 int ch = gp[i-1][j];
//                 if(ch!=-1){
//                     gp[i][j]=gp[i-1][ch];
//                 }
//             }
//         }

//     }
    
//     int getKthAncestor(int node, int k) {
//         for(int i=0;i<20;i++){
//             if( (k>>i) & 1){
//                 node = gp[i][node];
//                 if(node==-1){return -1;}
//             }
//         }
//         return node;
//     }
// };
