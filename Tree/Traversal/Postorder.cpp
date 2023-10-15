// Iterative

// vector<int> postOrder(Node* node) {
//         // code here
//         stack<Node*> st;
//         vector<int> ans;
//         st.push(node);
//         Node* prev = nullptr;
//         while(!st.empty()){
//             Node *current = st.top();
//             if(prev==nullptr || prev->left == current || prev->right==current){
//                 if(current->left){
//                     st.push(current->left);
//                 }else if(current->right){
//                     st.push(current->right);
//                 }else{
//                     st.pop();
//                     ans.push_back(current->data);
//                 }
//             }else if(current->left == prev){
//                 if(current->right){
//                     st.push(current->right);
//                 }else{
//                     st.pop();
//                     ans.push_back(current->data);
//                 }
//             }else if(current->right == prev){
//                 st.pop();
//                 ans.push_back(current->data);
//             }
//             prev = current;
//         }

//         return ans;
//     }
