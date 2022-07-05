class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) 
    {
        vector<int> ans;
        int index;
        
        for(int i=0;i<nums.size();i++)
        {
            index=abs(nums[i])-1;
            
            if(nums[index]<0)
            {
                ans.push_back(index+1);
            }
            
            else
                nums[index]=-nums[index];
        }
        
        return ans;
    }
};