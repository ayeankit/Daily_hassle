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
  
    ListNode* reverseKGroup(ListNode* head, int k) {
        int len = 0 ; 
        ListNode* tNode = head ;
        
        //find out the length of the current linked list 
        
        while(tNode != NULL){
            len ++ ; 
            tNode = tNode->next ; 
            
        }
        
        // if the linked list is short , return the list as it is. 
        if(len < k){
            return head ;
        }
        
        // reverse the linked list till k nodes 
        
        ListNode* tail = head ;  // keep a pointer to the head , which becomes the tail after reversal
        ListNode* curr = head ; 
        ListNode* prev = NULL ; 
        ListNode* forward = NULL ; 
        int i =  k ;
        while(i--){
            forward = curr->next ; 
            curr->next = prev ; 
            prev = curr ; 
            curr = forward ;
        }
        
        // call the function recursively again to join the tail with the reversed list ahead.
        
        head->next = reverseKGroup(forward, k) ; 
        
        //return the head of the reversed linkedlist . 
        
        return prev ; 
 
    }
};
   
   