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
    while(tNode != NULL){
        len ++ ; 
        tNode = tNode->next ;     
    }
    
    if(len < k){
        return head ;
    }
    

    
    ListNode* tail = head ;  
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
    

    tail->next = reverseKGroup(forward, k) ; 

    
    return prev ; 

}
};