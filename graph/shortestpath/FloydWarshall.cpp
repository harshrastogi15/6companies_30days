// finding the shortest path between all the pairs of vertices in a weighted graph.
// O(V*V*V)


// class Solution {
//   public:
// 	void shortest_distance(vector<vector<int>>&matrix){
// 	    // Code here
// 	    int n = matrix.size();
// 	   // vector<vector<int>> matrix(n,vector<int> (n,0));
	    
// 	    for(int i=0;i<n;i++){
// 	        for(int j=0;j<n;j++){
// 	            if(matrix[i][j]==-1)matrix[i][j]=1e9;
// 	        }
// 	    }
	    
// 	    for(int k=0;k<n;k++){
//     	    for(int i=0;i<n;i++){
//     	        for(int j=0;j<n;j++){
//                     if(matrix[i][j]>matrix[i][k]+matrix[k][j]){
//                         matrix[i][j]=matrix[i][k]+matrix[k][j];
//                     }
//     	        }
//     	    }
// 	    }
// 	    for(int i=0;i<n;i++){
// 	        for(int j=0;j<n;j++){
// 	            if(matrix[i][j]==1e9)matrix[i][j]=-1;
// 	        }
// 	    }
	    
	    
// 	}
// };