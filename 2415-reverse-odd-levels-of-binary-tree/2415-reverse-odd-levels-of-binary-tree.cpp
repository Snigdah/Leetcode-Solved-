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
    TreeNode* reverseOddLevels(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        int level = 0;
        
        while(!q.empty()){
            vector<int>v;
            int n  = q.size();
            
            
            for(int i =0; i<n; i++){
                TreeNode* ptr = q.front();
                if(ptr->left != NULL){
                    q.push(ptr->left);
                    v.push_back(ptr->left->val);
                }
                if(ptr->right != NULL){
                    q.push(ptr->right);
                    v.push_back(ptr->right->val);
                }
        
                q.pop();
            }
            
            if(level%2 == 0 && v.size() > 0){
                reverse(v.begin(), v.end());
                
                for(int i =0; i<v.size(); i++){
                    TreeNode* p = q.front(); q.pop();
                    cout<<p->val<<endl;
                    p->val = v[i];
                    q.push(p);
                }
                
            }
            
            level++;
                    
        }
        
        return root;
    }
};