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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
    if(m>=n)
            return head;
        
        ListNode *m_node=head, *n_node=head;
        
        // Getting to m and n node.
        int i=1;
        while(i<n){
            if(i<m) m_node=m_node->next;
            n_node=n_node->next;
            i++;
        }
        
        // Swapping values of beginning and end.
        int temp=m_node->val;
        m_node->val=n_node->val;
        n_node->val=temp;
        
        reverseBetween(head, ++m, --n);
        
        return head;
    }
};     
   