/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        if(root==NULL || root==p || root==q)
            return root;
        
        //left call
        TreeNode* left = lowestCommonAncestor(root->left, p, q);
        //right call
        TreeNode* right = lowestCommonAncestor(root->right, p, q);

        //result
        if(left==NULL)
            return right;
        
        if(right==NULL)
            return left;
        
        //ifboth not null ie we found answer return root
        else
            return root;
        
        
        
    }
};