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
    int widthOfBinaryTree(TreeNode* root) 
    {
        if(root==NULL)
            return 0;
     
        int max_width=INT_MIN;
        //queue for level order traversal
        queue<pair<TreeNode*,int>>q;
        
        //insert root in q
        q.push(make_pair(root,0));
        
        //do the traversal while q!=empty()
        while(!q.empty())
        {
            int size = q.size();
            
            //whatever node will be the 1st node at each level it would be the                  minindex  
            //not initializing it inside for beause minindex is for a particular                level
            
            int minindex=q.front().second;
            int first,last;
            
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
            
            max_width=max(max_width, (last-first +1));
        }
        
        return max_width;
    }
    
};