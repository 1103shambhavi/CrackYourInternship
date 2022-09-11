class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int n= nums.size();
        set<int>s;
        for(int i=0;i<n;i++)
        {
            s.insert(nums[i]);
        }
        int size= s.size();
        int j=0;
        for(int it :s)
        {
            nums[j++]=it;
        }
        return size;
               
       }
    
    
};