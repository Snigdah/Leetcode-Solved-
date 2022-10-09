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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* createTree(vector<int>&v, int l , int r){
        while(l<=r){
            int mid = (l+r)/2;
            TreeNode *root = new TreeNode(v[mid]);
            root->left = createTree(v, l, mid-1);
            root->right = createTree(v, mid+1, r);
            return  root;
        }
        
        return NULL;
    }
    
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int>v;
        
        ListNode *ptr = head;
        while(ptr!=NULL){
            int x = ptr->val;
            v.push_back(x);
            ptr = ptr->next;
        }
        
        for(int i=0;i<v.size(); i++){
            cout<<v[i]<<endl;
        }
        int s = v.size()-1;
        TreeNode *root = createTree(v, 0, s);
        
        return root;
    }
};