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
        void inorder(TreeNode* root ,vector<int>&v)
        {
            //base case
            if(root==NULL)
            {
                return ;
            }
            
            //left call
            inorder(root->left ,v);
            //node
            v.push_back(root->val);
            //right
            inorder(root->right,v);
        }
public:
    int kthSmallest(TreeNode* root, int k) {
        vector<int>v;
        inorder(root,v);
        
        return v[k-1];
    }
};