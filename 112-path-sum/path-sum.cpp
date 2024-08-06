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
    bool sumCheck(TreeNode* root, int targetSum){
        if(root->left==nullptr&&root->right==nullptr) return (targetSum-root->val)==0;
        bool ans=false;
        if(root->left) ans|=sumCheck(root->left,targetSum-root->val);
        if(root->right) ans|=sumCheck(root->right,targetSum-root->val);
        return ans;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==nullptr) return false;
        return sumCheck(root,targetSum);
    }
};