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

    int check(TreeNode* root){
        // base case 
        if(root == NULL)    
           return 0;
        
        int left = check(root->left); // left subtree height

        if(left == -1) // already unbalanced
           return -1;
        
        int right = check(root->right); // right subtree height

        if(right == -1) // already unbalanced
           return -1;

        if(abs(left - right) > 1) // cureent node unbalanced
           return -1;

        return 1 + max(left, right);
    }

    bool isBalanced(TreeNode* root) {
        return check(root) != -1;
    }
};