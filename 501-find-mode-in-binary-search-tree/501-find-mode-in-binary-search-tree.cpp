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
    void preorder(TreeNode* root, map<int,int> &mpp)
    {
        if(root==NULL)
            return;
        
        preorder(root->left,mpp);
        
        mpp[root->val]++;
        
        preorder(root->right,mpp);
        
        return;
    }
    
public:
    vector<int> findMode(TreeNode* root) 
    {
        map<int,int>mpp;
        preorder(root,mpp);
        
        int maxi=INT_MIN;
        for(auto i:mpp)
        {
            if(i.second > maxi)
                maxi=i.second;
        }
        
        vector<int>ans;
        for(auto i: mpp)
        {
            if(i.second==maxi)
                ans.push_back(i.first);
        }
        return ans;
    }
};