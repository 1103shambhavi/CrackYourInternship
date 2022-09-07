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
    int diameterOfBinaryTree(TreeNode* root) 
    {
        int val=0;
        //base case
        if(root==NULL)
            return 0;
        
        //case 1 diameter in left half
        int op1=diameterOfBinaryTree(root->left);
        
        
        
        //case 2 diameter in right half
        int op2= diameterOfBinaryTree(root->right);
        
        //case 3 diameter in both half
        int op3=height(root->left)+ height(root->right); 
        
        val= max(op1, max(op2,op3));
        return val;
    }
};