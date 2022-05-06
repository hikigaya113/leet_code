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
    
    
    void markTree(TreeNode*root,TreeNode*&prev,TreeNode*&first,TreeNode*&end){
        
        if(root==NULL) return;
        markTree(root->left,prev,first,end);
            if(prev!=NULL){
                if(root->val<prev->val){
                    if(first==NULL) first=prev;
                    end=root;
            }
            
        }
        
        prev=root;
        markTree(root->right,prev,first,end);
    }
    
    
    
    void recoverTree(TreeNode* root) {
        
        TreeNode*prev=NULL,*first=NULL,*end=NULL;
        markTree(root,prev,first,end);
        swap(first->val,end->val);
        return;
        
        
        
    }
};