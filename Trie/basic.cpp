// Trie is data structure help to store string in tree format
// ex: HARSH , HAN 
// 
//         H
//        / 
//       A
//      / \
//     R   N->end
//    /
//   S
//  /
// H ->end


// class Trie {

//     struct Node{
//         Node* arr[26];
//         bool end;
//     };

//     Node* createNode(){
//         Node* node = new Node;

//         for(int i=0;i<26;i++){
//             node->arr[i] = nullptr;
//         }
//         node->end = false;
//         return node;
//     };

//     Node* root;
// public:

//     Trie() {
//         root = createNode();  
//     }
    
//     void insert(string word) {
//         Node* temp = root;
//         for(auto i:word){
//             int idx = i-'a';
//             if(!temp->arr[idx]){
//                 temp->arr[idx] = createNode();
                
//             }
//             temp = temp->arr[idx];
//         }

//         temp->end = true;
//     }
    
//     bool search(string word) {
//         Node* temp = root;
//         for(auto i:word){
//             int idx = i-'a';
//             if(!temp->arr[idx]){
//                 return false;
//             }
//             temp = temp->arr[idx];
//         }
//         if(temp->end == true)
//             return true;
//         return false;
//     }
    
//     bool startsWith(string prefix) {
//         Node* temp = root;
//         for(auto i:prefix){
//             int idx = i-'a';
//             if(!temp->arr[idx]){
//                 return false;
//             }
//             temp = temp->arr[idx];
//         }
//         return true;
//     }
// };

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */