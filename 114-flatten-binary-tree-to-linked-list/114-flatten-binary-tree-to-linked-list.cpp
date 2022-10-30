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
    void flat(TreeNode* root , TreeNode* &prev)
    {
        //base case
        if(root==NULL)
            return;
        
        //call for 1st right then left
        flat(root->right,prev);
        flat(root->left,prev);
        
        root->right= prev;
        root->left = NULL;
        
        prev = root;
    }
    
public:
    void flatten(TreeNode* root) 
    {
        TreeNode* prev = NULL;
        flat(root,prev);
        
    }
};