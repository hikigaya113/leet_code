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
    bool isSymmetric(TreeNode* root) {
        
        if(root==NULL) return true;
        return isSemmentricTest(root->right,root->left);     
        
    }
    
    bool isSemmentricTest(TreeNode*p,TreeNode*q){
        
        if(p==NULL && q==NULL) return true;
        if(p==NULL || q==NULL) return false;
        
        if(p->val!=q->val) return false;
       return isSemmentricTest(p->right,q->left) && isSemmentricTest(p->left,q->right);
    }
};