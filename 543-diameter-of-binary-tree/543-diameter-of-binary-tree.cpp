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
    private:
    int height(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        
        //call for left
        int h1= height(root->left);
        int h2= height(root->right);
        
        int ans=max(h1,h2)+1;
        
        return ans;
    }
    
public:
    int diameterOfBinaryTree(TreeNode* root) 
    {
        //base case
        if(root==NULL)
            return 0;
        
        //call of left part
        int left = diameterOfBinaryTree(root->left);
        int right = diameterOfBinaryTree(root->right);
        
        int both = height(root->left) + height(root->right);
        
        int ans= max(left ,max(right , both));
        return ans;
    }
};