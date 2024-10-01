// https://leetcode.com/problems/middle-of-the-linked-list/

class Solution
{
public:
    int count(ListNode *head)
    {
        int count = 0;
        ListNode *temp = head;
        while (temp != NULL)
        {
            count++;
            temp = temp->next;
        }
        return count;
    }
    ListNode *middleNode(ListNode *head)
    {
        ListNode *temp = head;
        int size = count(head);
        for (int i = 1; i <= (size / 2); i++)
        {
            temp = temp->next;
        }
        return temp;
    }
};