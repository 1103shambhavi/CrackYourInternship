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
public:
    int widthOfBinaryTree(TreeNode* root) {
        if (root==NULL)
            return 0;
        
        int ans =0;
        
        queue<pair<TreeNode*,int>>q;
        q.push(make_pair(root,0));
        
        //start level order traversal
        while(!q.empty())
        {
            int size=q.size();
            int minindex,first,last;
            minindex=q.front().second;
            for(int i=0;i<size;i++)
            {
                pair<TreeNode* , int>temp=q.front();
                TreeNode*curr=temp.first;
                
                //making index valid to avoid overflow
                int currindex=temp.second-minindex;
                q.pop();
                
                //findind first and last index
                if(i==0)
                    first=temp.second-minindex;
                
                if(i==size-1)
                    last=temp.second-minindex;
                
                //now push in the queue the left and right child
                if(curr->left)
                    q.push(make_pair(curr->left, (long long)currindex*2 +1));
                
                if(curr->right)
                    q.push(make_pair(curr->right, (long long)currindex*2 +2));
                
            }
            ans= max(ans,last-first +1);
        }
        
        return ans;
        
    }
};