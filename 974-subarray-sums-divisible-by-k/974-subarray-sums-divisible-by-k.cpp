class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) 
    {
        int cummSum=0;
        int ans=0;
        
        unordered_map<int,int> rem;
        rem[0]=1;
        int remainder=0;
        
        for(int i=0;i<nums.size();i++)
        {
            cummSum+= nums[i];
            
            remainder = cummSum%k;
            
            if(remainder<0)//for handling negative value
            {
                remainder+=k;
            }
            
            if(rem.find(remainder)!= rem.end())
            {
                ans+= rem[remainder];
                rem[remainder]++;
                
            }
            else 
                rem[remainder]=1;
            
        }
        
        return ans;
        
    }
};