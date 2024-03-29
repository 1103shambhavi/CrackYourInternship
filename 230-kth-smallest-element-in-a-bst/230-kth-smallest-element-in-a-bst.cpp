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
    int helper(TreeNode* root, int &i,int k)
    {
        //base case
        if(root==NULL)
            return -1;
        
        //left
        int left = helper(root->left , i , k);
        if(left!=-1)
            return left;
        
        //root
        i++;
        if(i==k)
            return root->val;
        
        //right
        return helper(root->right , i , k);
       
            //return right;
            
    }
    
public:
    int kthSmallest(TreeNode* root, int k) {
        int i=0;
        return helper(root,i,k);
        
    }
};