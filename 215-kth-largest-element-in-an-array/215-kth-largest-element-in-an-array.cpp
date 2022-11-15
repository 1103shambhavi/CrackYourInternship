class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) 
    {
        
           priority_queue<int> mini;
        int s=nums.size();
           for(int i=0;i<s;i++)
           {
               mini.push(nums[i]);
           }
            int i=1;
            while(i<k)
            {
                mini.pop();   
                i++;
            }
            return mini.top();
    }
};