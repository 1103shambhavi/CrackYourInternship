class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        vector<int>ans;
        unordered_map<int,int>track;
        for(int i=0;i<nums.size();i++)
        {
            int diff= target-nums[i];
            if(track.find(diff)!=track.end()) //diff found
            {
                ans.push_back(i);
                ans.push_back(track[diff]);
                break;
            }
            
            track[nums[i]]=i;
        }
        return ans;
    }    
};