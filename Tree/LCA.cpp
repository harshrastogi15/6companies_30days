// Lowest common ancestor
// https://practice.geeksforgeeks.org/problems/lowest-common-ancestor-in-a-binary-tree/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

// class Solution
// {
    
//     Node* find(Node* root, int n1, int n2){
//         if(root==nullptr){
//             return root;
//         }
//         if(root->data == n1 || root->data == n2){
//             return root;
//         }
        
//         Node* left = find(root->left,n1,n2),*right = find(root->right,n1,n2);
        
//         if(left!=nullptr && right!=nullptr){return root;}
//         else if(left!=nullptr){return left;}
//         else{return right;}
        
//     }
    
//     public:
//     //Function to return the lowest common ancestor in a Binary Tree.
//     Node* lca(Node* root ,int n1 ,int n2 )
//     {
//        //Your code here
//        return find(root,n1,n2);
//     }
// };