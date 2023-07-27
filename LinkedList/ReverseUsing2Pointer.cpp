// class Solution
// {
// public:
//     ListNode *reverseList(ListNode *head)
//     {
//         ListNode *pre = NULL, *temp = head;
//         while (temp != nullptr)
//         {
//             temp = (ListNode *)((uintptr_t)pre ^ (uintptr_t)temp ^ (uintptr_t)(temp->next) ^ (uintptr_t)(temp->next = pre) ^ (uintptr_t)(pre = temp));
//         }
//         return pre;
//     }
// };
