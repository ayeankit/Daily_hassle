/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
      
        
      ListNode* temp = head,*ans = NULL;
        unordered_map<ListNode*,int> m;
        while(temp){
            if(m.count(temp)==0){
                m[temp]++;
            }
            if(m.count(temp->next)==1){
                ans = temp->next;
                break;
            }
            temp = temp->next;
        }
        return ans;
       
    }
};