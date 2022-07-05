class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) 
    {
        unordered_map<int,int> fre;
        
        for(int i=0;i<nums.size();i++)
        {
            fre[nums[i]]++;
        }
        
        vector<int> ans;
        for(auto i:fre)
        {
            if(i.second==2)
                ans.push_back(i.first);
        }
        
        return ans;
    }
};