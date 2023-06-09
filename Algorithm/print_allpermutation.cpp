// class Solution
// {
//     vector<string> ans;
//     void recursion(string &s,int l, int r){
//         if(l>=r){
//             ans.push_back(s);
//             return ;
//         }
//         for(int i=l;i<=r;i++){
//             swap(s[i],s[l]);
//             recursion(s,l+1,r);
//             swap(s[i],s[l]);
//         }

//     }

// 	public:
// 		vector<string>find_permutation(string S)
// 		{
// 		    // Code here there
// 		    recursion(S,0,S.size()-1);
// 		    sort(ans.begin(),ans.end());
// 		    for(int i=0;i<ans.size()-1;){
//                 if(ans[i]==ans[i+1]){
//                     ans.erase(ans.begin()+i);
//                 }
//                 else{
//                     i++;
//                 }
// 		    }
// 		    return ans;
// 		}
// };
