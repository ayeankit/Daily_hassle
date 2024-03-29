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
   
         
    ListNode* getMid(ListNode* head)
    {
        ListNode *slow,*fast;
        slow = fast = head;
        while(fast->next!=NULL&&fast->next->next!=NULL)
        {
            slow=slow->next;
            fast = fast->next->next;
        }
        return slow;
        
    }
    
    ListNode* getReverse(ListNode* head)
    {
        ListNode *cur,*prev;
        cur=head;
        prev = NULL;
        while(cur!=NULL)
        {
            ListNode *temp = cur->next;
            cur->next = prev;
            prev = cur;
            cur = temp;
        }
        return prev;
    }
    
    void reorderList(ListNode* head) {
        
        //  If Linked List contains less than 3 nodes then no need to do anything.
        if(head==NULL||head->next==NULL||head->next->next==NULL)
            return;
        
        /*  
            Get Middle Node
            If there is two middle node then return first Middle.
        */
        ListNode* mid = getMid(head);
        
        //  Seprate the Second Half of the LinkedList
        ListNode* secondHalf = mid->next;
        mid->next=NULL;
        
        //  Reverse the Second Half of LinkedList
        ListNode* revHalf = getReverse(secondHalf);
        
        //  Finally Merge in Required Manner
        while(head!=NULL&&revHalf!=NULL)
        {
            ListNode* temp = head->next;
            head->next=revHalf;
            revHalf=revHalf->next;
            head->next->next=temp;
            head = temp;
        }
    }
};
        
   