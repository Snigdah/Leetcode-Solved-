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
    ListNode* mergeNodes(ListNode* head) {
        
        ListNode *ptr = head;
        int temp = 0;
        
        while(ptr->next != NULL){
          
            if(ptr->next->val > 0){
                temp = temp + ptr->next->val;
                ptr->next = ptr->next->next;
              //  ptr = ptr->next;
            }
            else{
                ptr->next->val = temp;
                temp = 0;
                ptr = ptr->next;
            }
        }
        
        return head->next;
    }
};