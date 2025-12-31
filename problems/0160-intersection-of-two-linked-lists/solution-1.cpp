/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *p = headA;
        ListNode *q = headB;
        while(p != NULL || q != NULL)
        {
            if(p == NULL) p = headB;
            if(q == NULL) q = headA;

            if(p == q) return p;

            p = p->next;
            q = q->next;
        }
        return NULL;
    }
};