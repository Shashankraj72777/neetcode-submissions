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

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

        // Both nodes smaller
        if(p->val < root->val && q->val < root->val){
            return lowestCommonAncestor(root->left, p, q);
        }

        // Both nodes greater
        if(p->val > root->val && q->val > root->val){
            return lowestCommonAncestor(root->right, p, q);
        }
        
        // Split point found
        return root;
    }
};