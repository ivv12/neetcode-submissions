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
    void reorderList(ListNode* head) {
        if (!head || !head->next) 
        {
            return;
        }

        ListNode* s = head;
        ListNode* f = head;
        while (f && f->next) 
        {
            s = s->next;
            f = f->next->next;
        }

        ListNode* curr = s->next;
        ListNode* prev = nullptr;
        s->next = nullptr;
        while (curr) 
        {
            ListNode* nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }

        ListNode* p1 = head;
        ListNode* p2 = prev;
        while (p2) 
        {
            ListNode* n1 = p1->next;
            ListNode* n2 = p2->next;
            p1->next = p2;
            p2->next = n1;
            p1 = n1;
            p2 = n2;
        }
    }
};
