class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        map<int,int>mpp;
        for(int i=0;i<nums.size();i++)
        {
            //duplicate found
            if(mpp.find(nums[i])!=mpp.end())
                return true;
               
            
            //duplicate not found
            else
                 mpp[nums[i]]++;
        }
        return false;
        
    }
};