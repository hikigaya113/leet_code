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
    
   
     vector<int>ans;
    vector<int> inorderTraversal(TreeNode* root) {
        // vector<int>ans;
        // helper(root,ans);
        // return ans;
    
//      void helper(TreeNode* root,vector<int>&res){
        
//         if(!root) return;
            
//             helper(root->left,res);
//             res.push_back(root->val);
//             helper(root->right,res);
        
       
        traversal(root);
        return ans;
    }
    
    void traversal(TreeNode*root){
        if(!root) return;
        traversal(root->left);
        ans.push_back(root->val);
        traversal(root->right);
    }
    
};