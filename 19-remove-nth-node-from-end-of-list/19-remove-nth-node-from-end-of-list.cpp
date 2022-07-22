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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
         ListNode* curr = head;
        int sz = 0;
        while(curr!=NULL)
        {
            curr=curr->next;
            sz++;
        }
        int r = sz-n;
        curr = head;
        while(r>1)
        {
           curr = curr->next;
            r--;
        }
        if(r==0) 
        {
            curr = curr->next;
            delete(head);
            return curr;
        }
        ListNode* next = curr->next->next;
        delete(curr->next);
        curr->next = next;
        return head;
    }
};