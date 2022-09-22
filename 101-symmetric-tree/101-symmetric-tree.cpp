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
    bool solve(TreeNode* left,TreeNode* right)
    {
        //if the node we are standing is null
        if(left==NULL || right==NULL)
            return (left==right);
        
        //if node is not null it has some value
        if(left->val!=right->val)
            return false;
        
        //now traverse both the subtrees simultaneously
        return 
            solve(left->left, right->right) 
            &&
            solve(left->right,right->left);
        }
    
public:
    bool isSymmetric(TreeNode* root) 
    {
        if(root==NULL)
            return true;
        
        return solve(root->right,root->left);
    }
};