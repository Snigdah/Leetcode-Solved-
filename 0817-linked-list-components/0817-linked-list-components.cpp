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
    int numComponents(ListNode* head, vector<int>& nums) {
        
        set<int>s;
        
        for(int i=0; i<nums.size(); i++){
            s.insert(nums[i]);
        }
        
        bool flag = true;
        int ans = 0;
        while(head!=NULL){
            int val = head->val;
            
            if(flag==true && s.count(head->val)==1){
                ans++;
                flag = false;
            }
            if(s.count(head->val)==0){
                flag = true;
            }
            
            head = head->next;
        }
        
        return ans;
    }
};