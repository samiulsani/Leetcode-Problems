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
// https://leetcode.com/problems/palindrome-linked-list/

class Solution {
public:
    void insert_tail(ListNode*& head, ListNode*& tail, int val) {
        ListNode* newNode = new ListNode(val);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = tail->next;
    }
    void reverse(ListNode*& head, ListNode* cur) {
        if (cur->next == NULL) {
            head = cur;
            return;
        }
        reverse(head, cur->next);
        cur->next->next = cur;
        cur->next = NULL;
    }

    bool isPalindrome(ListNode* head) {
        ListNode* newHead = NULL;
        ListNode* newTail = NULL;
        ListNode* temp = head;
        while (temp != NULL) {
            insert_tail(newHead, newTail, temp->val);
            temp = temp->next;
        }
        reverse(newHead, newHead);
        temp = head;
        ListNode* temp2 = newHead;
        while (temp != NULL) {
            if (temp->val != temp2->val) {
                return false;
            }
            temp = temp->next;
            temp2 = temp2->next;
        }
        return true;
    }
};