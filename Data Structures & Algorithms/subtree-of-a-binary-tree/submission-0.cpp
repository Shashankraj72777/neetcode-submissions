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

    bool isSame(TreeNode* p, TreeNode* q){
        // both null
        if(p == NULL && q == NULL)
           return true;
        // one null
        if(p == NULL || q == NULL)
           return false;
        // value mismatch
        if(p->val != q->val)
           return false;

        // now compare subtree
        return isSame(p->left, q->left) && isSame(p->right, q->right);
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        
        if(root == NULL)
           return false;

        if(isSame(root, subRoot))
           return true;

        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }
};