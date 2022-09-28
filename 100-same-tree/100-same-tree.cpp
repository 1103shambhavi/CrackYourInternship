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
    bool isSameTree(TreeNode* p, TreeNode* q) 
    {
        //base cases
        if(p==NULL && q==NULL)
            return true;
        
        if(p!=NULL && q==NULL)
            return false;
    
        if(p==NULL && q!=NULL)
            return false;
        
        //call for right and left subtree
        bool left = isSameTree(p->left,q->left);
        
        bool right = isSameTree(p->right , q->right);
        
        bool val = p->val==q->val;
        
        if(left && right && val)
            return true;
        
        else
            return false;
        
    }
};