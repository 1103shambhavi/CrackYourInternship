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
    void inorder(TreeNode* root , vector<int> &in)
    {
        //base case
        if(root==NULL)
            return;
        
        inorder(root->left,in);
        
        in.push_back(root->val);
        
        inorder(root->right ,in);
        
        return;
    }
    
    TreeNode*makeTree(vector<int>&in,int s,int e)
    {
        
        //base case
        if(s>e)
            return NULL;
        
        int mid = (s+e)/2;
        
        TreeNode* newNode = new TreeNode(in[mid]);
        
        
        newNode->left = makeTree(in,s,mid-1);
        
        newNode->right = makeTree(in, mid+1,e);
        
        return newNode;
    }
    
public:
    TreeNode* balanceBST(TreeNode* root) 
    {
        vector<int> in ;
        inorder(root,in);
        
        return makeTree(in,0,in.size()-1);
        
        
        
    }
};