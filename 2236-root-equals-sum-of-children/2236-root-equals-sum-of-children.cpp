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
    bool checkTree(TreeNode* root) 
    {
        if(root == NULL)
            return false;
        
        int left,right;
        int data=root->val;
        
        if(root->left)
           left = root->left->val;
        if(root->right)
            right= root->right->val;
        
        int sum=left+right;
        bool ans= false;
        ans = data==sum;
         
        return ans;
        
        
    }
};