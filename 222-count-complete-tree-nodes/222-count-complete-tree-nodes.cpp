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
    private :
   int findheightLeft(TreeNode* root)
   {
       if(root==NULL)
           return 0;
       
       int ht=0;
       while(root)
       {
           ht++;
           root=root->left;
       }
       return ht;
   }
    
    int findheightRight(TreeNode* root)
   {
       if(root==NULL)
           return 0;
       
       int ht=0;
       while(root)
       {
           ht++;
           root=root->right;
       }
        return ht;
   }
public:
    int countNodes(TreeNode* root) 
    {
        if (root==NULL)
            return 0;
        
        //fing right height
        int rh=findheightRight(root);
        
        //find left hright
        int lh = findheightLeft(root);
        
        //if both are equal
        if(rh==lh)
            return (pow(2,rh)-1);
        
        return (1 + countNodes(root->left) + countNodes(root->right));
        
    }
};