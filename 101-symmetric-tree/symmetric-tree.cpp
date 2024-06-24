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
    bool helper(TreeNode* r1, TreeNode* r2){
        if(!r1 && !r2){
            return true;
        }
        if(!r1 && r2){
            return false;
        }
        if(r1 && !r2){
            return false;
        }
        
        bool rr1=helper(r1->left,r2->right);
        bool rr2=helper(r1->right,r2->left);
        
        return(r1->val==r2->val && rr1 && rr2);

    }
    bool isSymmetric(TreeNode* root) {
       return helper(root->left,root->right);
        
    }
};