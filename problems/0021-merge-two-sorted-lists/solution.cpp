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
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* mergedlist = new ListNode();
        ListNode* tail = mergedlist;

        while(list1 != NULL && list2 != NULL)
        {
            if (list2->val < list1->val)   
            {
                tail->next = new ListNode(list2->val);
                list2 = list2->next;
            }
            else
            {
                tail->next = new ListNode(list1->val);
                list1 = list1->next;
            }
            
            tail = tail->next;
        }

        while (list1 != NULL)
        {
            tail->next = new ListNode(list1->val);
            list1 = list1->next;
            tail = tail->next;
        }

        while (list2 != NULL)
        {
            tail->next = new ListNode(list2->val);
            list2 = list2->next;
            tail = tail->next;
        }

        return mergedlist->next;
    }
};