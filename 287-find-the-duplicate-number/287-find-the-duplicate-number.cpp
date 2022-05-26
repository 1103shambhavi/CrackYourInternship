class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {
        int ans;
        int n=nums.size();
        vector<int>fre(n+1,0);
        for(auto i:nums)
        {
            fre[i]++;
            if(fre[i]>1)
                return i;
        }
        return -1;
    }   
         
};