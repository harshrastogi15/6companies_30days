// help in when we have negative weighted edges 
// help to detact negative weight Cycle
// O(V*E);
// 


// int isNegativeWeightCycle(int n, vector<vector<int>>edges){
// 	    // Code here
	    
// 	    vector<int> ans(n,INT_MAX);
// 	    ans[0]=0;
// 	    for(int i=1;i<n;i++){
// 	        for(int j=0;j<edges.size();j++){
// 	            int u = edges[j][0];
// 	            int v = edges[j][1];
// 	            int val = edges[j][2];
// 	            if(ans[u]!=INT_MAX && ans[v] > ans[u]+val){
// 	                ans[v]=ans[u]+val;
// 	            }
// 	        }
// 	    }
	    
// 	    for(int j=0;j<edges.size();j++){
// 	        int u = edges[j][0];
// 	        int v = edges[j][1];
// 	        int val = edges[j][2];
// 	        if(ans[v] > ans[u]+val){
// 	            return 1;
// 	        }
// 	    }
	    
// 	    return 0;
	   
// 	}