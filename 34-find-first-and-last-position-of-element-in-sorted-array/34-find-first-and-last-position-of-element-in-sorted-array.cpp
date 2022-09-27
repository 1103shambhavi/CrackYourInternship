class Solution {
    private:
        void firstOcc(vector<int>nums, int target,vector<int>&ans)
        {
            int sol=-1;
            int s=0;
            int e=nums.size()-1;
            
            int mid= s+(e-s)/2;
            while(s<=e)
            {
                if(nums[mid]==target)
                {
                    sol=mid;
                    e=mid-1;
                }
                
                else if(nums[mid]>target)
                    e=mid-1;
                
                else
                    s=mid+1;
                
               mid= s+(e-s)/2;
            }
            
            ans.push_back(sol);
        }
    
    void lastOcc(vector<int>nums, int target,vector<int>&ans)
    {
        int sol=-1;
            int s=0;
            int e=nums.size()-1;
            
            int mid= s+(e-s)/2;
            while(s<=e)
            {
                if(nums[mid]==target)
                {
                    sol=mid;
                    s=mid+1;
                }
                
                else if(nums[mid]>target)
                    e=mid-1;
                
                else
                    s=mid+1;
                
              mid= s+(e-s)/2;
            }
            
            ans.push_back(sol);
    }
    
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        vector<int>ans;
        
        //call for 1stocc
        firstOcc(nums,target,ans);
        lastOcc(nums,target,ans);
        
        return ans;
        
    }
};