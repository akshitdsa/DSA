/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
//  Approach 1 - using Iterative Method
// Complexity
// Time complexity: O(N)
// Space complexity: O(1)
// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         ListNode * temp = head ;
//         ListNode * prev = NULL;
//         while(temp)
//         {
//             ListNode *front = temp->next;
//             temp->next = prev;
//             prev = temp;
//             temp=front;
//         }
//         return prev;
//     }
// };
// Approach 2 - using Recrusion
// Complexity
// Time Complexity: O(N), Visiting over every node one time
// Auxiliary Space: O(N), Function call stack space

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next == NULL) return head;

        ListNode* newHead = reverseList(head->next);
        ListNode* front = head->next;
        front->next = head;
        head->next = NULL;
        return newHead;
    }
};
