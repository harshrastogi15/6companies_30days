// class Solution{
// 	public:
// 		vector<string> AllPossibleStrings(string s){
// 		    // Code here
// 		    int n = s.size();
// 		    int power = pow(2,n);
// 		    vector<string> ans;
// 		    for(int i=1;i<power;i++){
// 		        string temp;
// 		        for(int k=0;k<n;k++){
// 		            if(i & (1<<k)){
// 		                temp.push_back(s[k]);
// 		            }
// 		        }
// 		        ans.push_back(temp);
// 		    }
// 		    sort(ans.begin(),ans.end());
// 		    return ans;

// 		}
// };
