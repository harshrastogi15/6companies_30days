
// Binary exponentiation with matrix
// First find matrix of fix size
// fibonacci : fn = fn-1 + fn-2
//  |fn  |  =  |a b|  * |fn-1|
//  |fn-1|     |c d|    |fn-2|
//  
//  |fn  |  =  |a b|^n-2  * |f2|
//  |fn-1|     |c d|        |f1|
//  

// class Solution {
//     long long mod = 1000000007;
//     vector<vector<long long>> matrixMultiplication(vector<vector<long long>> mat1,vector<vector<long long>> mat2){
//         long long n = mat1.size();
//         vector<vector<long long>> ans(n,vector<long long> (n,0));
//         for(long long i=0;i<n;i++){
//             for(long long j=0;j<n;j++){
//                 for(long long k=0;k<n;k++){
//                     ans[i][j] = (ans[i][j] + (mat1[i][k]*mat2[k][j])%mod)%mod;
//                 }
//             }
//         }
//         return ans;
//     }
    
//     vector<vector<long long>> binaryExponentiation(vector<vector<long long>> mat, long long N){
//         if(N==0){
//             return {{1,0},{0,1}};
//         }
//         if(N==1){
//             return mat;
//         }
        
//         vector<vector<long long>> ans = binaryExponentiation(mat,N/2);
        
//         ans = matrixMultiplication(ans,ans);
        
//         if(N&1){
//             ans = matrixMultiplication(ans,mat);
//         }       
//         return ans;     
//     }
//   public:
//     int countStrings(long long int N) {
//         // Code here
//         vector<vector<long long>> mat = {{1,1},{1,0}};
//         // vector<vector<long long>> ans = matrixMultiplication(mat);
//         vector<vector<long long>> ans = binaryExponentiation(mat,N-1);
//         // int n = 2;
//         // for(long long i=0;i<n;i++){
//         //     for(long long j=0;j<n;j++){
//         //         cout<<ans[i][j]<<" ";
//         //     }
//         //     cout<<"\n";
//         // }
//         return (ans[0][0]*2 + ans[0][1])%mod;
//     }
// };
