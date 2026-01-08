/**
 * Definition for singly-linked list.
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* helper = new ListNode(0, head);             
        ListNode* node = helper; 
        while (node != NULL && node->next != NULL) 
        { 
            if (node->next->val == val) 
            { 
                node->next = node->next->next; 
            } 
            else node = node->next; 
        }
        return helper->next;
    }
};