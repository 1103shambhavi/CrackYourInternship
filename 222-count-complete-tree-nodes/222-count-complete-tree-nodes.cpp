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
    private :
    void inorder(TreeNode* root, int &count)
    {
        if(root==NULL)
            return;
        if(root->left)
            inorder(root->left , count);
        count++;
        if(root->right)
            inorder(root->right,count);
    }
    
public:
    int countNodes(TreeNode* root) 
    {
        
        int count=0;
        if(root==NULL)
            return count;
        inorder(root,count);
        return count;
    }
};