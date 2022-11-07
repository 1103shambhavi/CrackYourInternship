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
    
    void inorder(TreeNode* root , vector<int> &v)
    {
        //base case
        if(root==NULL)
            return ;
        
        //left
        inorder(root->left , v);
        //root
        v.push_back(root->val);
        //right
        inorder(root->right , v);
        
        return;
        
    }
public:
    bool findTarget(TreeNode* root, int k) 
    {
        vector<int>v;
        inorder(root,v);
        
        int i=0;
        int j = v.size()-1;
        
        while(i<j)
        {
            if(v[i]+v[j] == k)
            {
                return true;
                break;
            }    
            
            else if(v[i]+v[j] > k)
                j--;
            
            else
                i++;
        }
        return false;
        
        
    }
};