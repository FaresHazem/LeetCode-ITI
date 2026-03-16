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
class Solution
{
public:
    ListNode *swapPairs(ListNode *head)
    {
        ListNode *dummy = new ListNode(0, head);
        ListNode *prev = dummy;

        while (prev->next != nullptr && prev->next->next != nullptr)
        {
            // Generic Approach
            ListNode *first = prev->next;
            ListNode *second = first->next;
            ListNode *next_pair = second->next;

            prev->next = second;
            second->next = first;
            first->next = next_pair;

            prev = first;
        }

        return dummy->next;
    }
};