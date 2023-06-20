// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
//
//     ListNode* reverse(ListNode* head){
//         ListNode* pre=NULL, *ptr=head, *post=head;
//         while(ptr!=nullptr){
//             post = ptr->next;
//             ptr->next = pre;
//             pre = ptr;
//             ptr = post;
//         }
//         return pre;
//     }
//
//
//     ListNode* findMiddle(ListNode* head){
//         ListNode* slow=head, *fast=head;
//         while(fast->next!=nullptr && fast->next->next!=nullptr){
//             slow = slow->next;
//             fast = fast->next->next;
//         }
//
//         return slow->next;
//     }
//
// public:
//     bool isPalindrome(ListNode* head) {
//         if( head == nullptr && head->next==nullptr){
//             return true;
//         }
//
//         ListNode* middle = findMiddle(head);
//
//         middle = reverse(middle);
//         // cout<<middle->val<<"\n";
//         ListNode* temp=head;
//         while(middle!=nullptr){
//             if(temp->val!=middle->val){return false;}
//             temp = temp->next;
//             middle = middle->next;
//         }
//         return true;
//     }
// };
