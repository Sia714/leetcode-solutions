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
    bool ans=true;
    void helper(TreeNode* root, TreeNode* &prev){
        
        if(root==NULL){
            return;
        }
        helper(root->left,prev);
        if(prev!=NULL){
            if(prev->val>=root->val){
                ans=false;
                return;
            }
        }
        prev=root;
        helper(root->right,prev);
    }

    bool isValidBST(TreeNode* root) {
        TreeNode *prev=NULL;
        helper(root,prev);
        return ans;
    }
};