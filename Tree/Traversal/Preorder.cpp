// Iterative

// vector<int> preOrder(Node* root)
//     {
//         //code here
//         stack<Node*> st;
//         vector<int> ans;
//         st.push(root);

//         while(!st.empty()){
//             root = st.top();
//             ans.push_back(root->data);
//             st.pop();
//             if(root->right!=nullptr){
//                 st.push(root->right);
//             }
//             if(root->left!=nullptr){
//                 st.push(root->left);
//             }
//         }

//         return ans;
//     }
