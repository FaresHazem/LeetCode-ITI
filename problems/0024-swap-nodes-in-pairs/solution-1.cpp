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
        if (head == nullptr)
            return NULL;

        ListNode *dummy = new ListNode(0, head);
        ListNode *slow = dummy;
        ListNode *fast = head;

        while (fast != nullptr && fast->next != nullptr)
        {
            // Simple Approach
            ListNode *temp = slow->next;
            slow->next = fast->next;
            fast->next = temp;

            slow = slow->next;
            fast = fast->next;
        }

        return dummy->next;
    }
};