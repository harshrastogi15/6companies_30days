// Iterative
// class Solution {
//   public:
//     // Function to return a list containing the inorder traversal of the tree.
//     vector<int> inOrder(Node* root) {
//         // Your code here
//         stack<Node*> st;
//         st.push(root);
//         root= root->left;
//         vector<int> ans;
//         while(!st.empty() || root!=nullptr){
//             while(root!=nullptr){
//                 st.push(root);
//                 root= root->left;
//             }
//             root = st.top();
//             st.pop();

//             ans.push_back(root->data);
//             root = root->right;

//         }
//         return ans;
//     }
// };
