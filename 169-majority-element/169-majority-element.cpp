class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        unordered_map<int,int>mpp;
        //1st int value 2nd int for frequency
        int ans=0;
    
        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
            if(mpp[nums[i]]>nums.size()/2)
                ans=nums[i];
        }
        return ans;
    }
};