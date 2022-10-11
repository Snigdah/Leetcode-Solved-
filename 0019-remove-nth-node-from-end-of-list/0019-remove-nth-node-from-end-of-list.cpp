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
        
      
        
        int size = 0;
        ListNode* ptr = head;
        
        while(ptr!= NULL){
            ptr = ptr->next;
            size++;
        }
        
        if(size == 1){
            return NULL;
        }
        if(size  ==  n){
            return head->next;
        }

        ptr = head;
        
       int target = size - n;
        
       for(int i = 0; i<target-1; i++){
           ptr = ptr->next;
       } 
        

      ListNode *temp;
      temp = ptr->next;
        cout<<ptr->val<<endl;
      ptr->next = ptr->next->next;
      delete(temp); 

        
     
        
        return head;
    }
};