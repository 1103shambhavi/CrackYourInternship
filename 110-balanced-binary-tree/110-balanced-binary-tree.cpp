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
    pair<bool,int>fastBalanced(TreeNode* root)
    {
        //base case
        if(root==NULL)
        {
            pair<bool,int>p = make_pair(true,0);
            return p;
        }
        
        //call for right and left
        pair<bool,int> left = fastBalanced(root->left);
        pair<bool,int> right = fastBalanced(root->right);
        
        bool op1=left.first;
        bool op2= right.first;
        
        bool htdiff= abs(left.second - right.second) <=1;
        
        //make ans pair
        pair<bool,int>ans;
        if(op1 && op2 && htdiff)
            ans.first= true;
        else
            ans.first=false;
        
        ans.second= max(left.second,right.second)+1;
        
        return ans;
        
        
    }
    
public:
    bool isBalanced(TreeNode* root) 
    {
       //base case
        if(root==NULL)
            return true;
        
        pair<bool,int> ans=fastBalanced(root);
        
        return ans.first;
        
        
        
    }
};