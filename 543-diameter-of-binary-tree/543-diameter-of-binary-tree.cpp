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
    pair<int,int> fastDia(TreeNode* root)
    {
        if(root==NULL)
        {
            pair<int,int>p=make_pair(0,0);
            return p;
        }
        
        //call for left tree
        pair<int,int>left=fastDia(root->left);
        
        //call for right
        pair<int,int>right=fastDia(root->right);
        
        //extracting options
        int op1=left.first;
        int op2=right.first;
        
        int op3= left.second + right.second;
        
        //make ans;
        pair<int,int>ans;
        
        ans.first= max(op1,max(op2,op3));
        ans.second=max(left.second,right.second)+1;
        
        return ans;
        
    }
    
public:
    int diameterOfBinaryTree(TreeNode* root) 
    {
        //base case
        if(root==NULL)
            return 0;
        
        pair<int,int>ans= fastDia(root);
        
        return ans.first;
    }
};