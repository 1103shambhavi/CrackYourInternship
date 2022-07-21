class Solution {
public:
    int pivotIndex(vector<int>& nums) 
    {
        int sum=0;
        int leftsum=0;
        
        //Calculating total sum
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
        }
        
        //now traversing the loop and checking if at any point sum and leftsum becomes equal if yes return that index if no return -1
        
        for(int i=0;i<nums.size();i++)
        {
            sum-=nums[i];
            if(leftsum==sum)
                return i;
            
            leftsum+=nums[i];
        }
        //if we came out of loop means no index have returned hence returning -1 (no condition match)
        
        return -1;
    }
};