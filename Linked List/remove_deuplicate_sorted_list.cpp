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

// https : // leetcode.com/problems/remove-duplicates-from-sorted-list/

class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        if (head == NULL)
            return head;
        ListNode *temp = head;
        while (temp->next != NULL)
        {
            if (temp->val == temp->next->val)
            {
                temp->next = temp->next->next;
            }

            if (temp->next == NULL)
                break;
            else if (temp->val != temp->next->val)
            {
                temp = temp->next;
            }
        }
        return head;
    }
};