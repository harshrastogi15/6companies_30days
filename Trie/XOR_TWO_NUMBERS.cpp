// https://leetcode.com/problems/maximum-xor-of-two-numbers-in-an-array/description/

// class Solution {
//     struct Node{
//         Node* flag[2];
//     };
//     Node *root;
//     Node* createNode(){
//         Node * temp = new Node();
//         temp->flag[0]=nullptr;
//         temp->flag[1]=nullptr;
//         return temp;
//     }

//     void insert(bitset<32> s){
//         Node* temp = root;
//         for(int i=31;i>=0;i--){
//             if(!temp->flag[s[i]]){
//                 temp->flag[s[i]] = createNode();
//             }
//             temp= temp->flag[s[i]];
//         }
//     }

//     int search(bitset<32> s){
//         Node* temp = root;
//         int ans = 0;
//         for(int i=31;i>=0;i--){
//             if(temp->flag[!s[i]]){
//                 ans = ans | 1<<i ;
//                 temp = temp->flag[!s[i]];
//             }else {
//                 temp = temp->flag[s[i]];
//             }
//         }
//         return ans;
//     }

// public:
//     int findMaximumXOR(vector<int>& nums) {
//         root = createNode();
//         for(auto i:nums){
//             bitset<32> s(i);
//             insert(s);
//         }
//         int ans = 0;
//         for(auto i:nums){
//             bitset<32> s(i);
//             insert(s);
//             ans = max(ans,search(s));
//         }
//         return ans;
//     }
// };
