class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) 
    {
        vector<int>pos;
        vector<int>neg;
        
        for(int i:nums)
        {
            if(i>0)
                pos.push_back(i);
            else
                neg.push_back(i);
        }
        
        int p=0;
        int n=0;
        for(int i=0;i<nums.size();i++)
        {
            if((i&1))
                nums[i]=neg[n++];
            else
                nums[i]=pos[p++];
            
        }
        return nums;
    }
};