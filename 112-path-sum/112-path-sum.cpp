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
       bool flag=false;
    void Sum(TreeNode *root,int &sum,int targetsum){
        if(root==NULL) return;
        sum+=root->val;
        if((sum==targetsum)&&(root->left==NULL&&root->right==NULL)) {
            flag=true; 
            return;
        }
        Sum(root->left,sum,targetsum);
        Sum(root->right,sum,targetsum);
        sum-=root->val;
    }
    public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum=0;
        Sum(root,sum,targetSum);
        return flag;
    }
};