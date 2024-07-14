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
    void inorder(TreeNode* root, vector<int> &arr){
        if(root==NULL){
            return;
        }
        inorder(root->left,arr);
        arr.push_back(root->val);
        inorder(root->right,arr);
    }
    TreeNode* buildbbst(vector<int> &arr, int left, int right){
        if(left>right){
            return nullptr;
        }
        int mid=(left+right)/2;
        TreeNode* temp=new TreeNode(arr[mid]);
        temp->left=buildbbst(arr,left,mid-1);
        temp->right=buildbbst(arr,mid+1,right);
        return temp;

    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> ans;
        inorder(root,ans);
        return buildbbst(ans,0,ans.size()-1);
    }
};
