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
    void flatten(TreeNode* root) {
        
       TreeNode* ptr = root;
        if(root!=NULL){
            while(ptr!= NULL){
           
           if(ptr->left != NULL){
               TreeNode *lt = ptr->left;
               while(lt->right != NULL){
                   lt = lt->right;
               }
               
               lt->right = ptr->right;
               ptr->right = ptr->left;
               ptr->left = NULL;
           }
           
           ptr = ptr->right;
       } 
            cout<<"Bangla"<<endl;
    }
       
    }
};