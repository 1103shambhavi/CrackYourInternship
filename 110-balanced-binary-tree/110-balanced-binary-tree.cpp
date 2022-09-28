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
        
        int h1= height(root->left);
        int h2= height(root->right);
        
        int ans= max(h1,h2)+1;
        return ans;
    }
public:
    bool isBalanced(TreeNode* root) 
    {
       //base case
        if(root==NULL)
            return true;
        
        //call for left and right part
        bool left = isBalanced(root->left);
        bool right = isBalanced(root->right);
        
        bool htdiff= abs(height(root->left) - height(root->right)) <=1;
        
        if(left && right && htdiff)
            return true;
        
        else
            return false;
        
    }
};