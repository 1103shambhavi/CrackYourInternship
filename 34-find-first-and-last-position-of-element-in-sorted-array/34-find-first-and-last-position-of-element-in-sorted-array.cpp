class Solution {
    private:
        int firstOcc(vector<int>nums, int target, int s,int e, int &a)
        {
            
            //base case
            if(s>e)
                return a;
            int mid = s+(e-s)/2;
            
            if(nums[mid]==target){
                a=mid;
                return firstOcc(nums,target,s,mid-1,a);
            }
            
            if(nums[mid]>target)
                return firstOcc(nums,target,s,mid-1,a);
            
            else
                return firstOcc(nums,target,mid+1,e,a);
            
        return a;
            
        }
    
   int lastOcc(vector<int>nums, int target, int s,int e,int &b)
        {
       
            //base case
            if(s>e)
                return b;
            int mid = s+(e-s)/2;
            
       
            if(nums[mid]==target){
                b=mid;
                return lastOcc(nums,target,mid+1,e,b);
            }
            
            if(nums[mid]>target)
                return lastOcc(nums,target,s,mid-1,b);
            
            else
                return lastOcc(nums,target,mid+1,e,b);
       
       return b;
            
        }
    
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        vector<int>ans;
        
        int s=0;
        int e= nums.size()-1;
        int a=-1;
        int b=-1;
        //call for 1stocc
        int l = firstOcc(nums,target,s,e,a);
        int r = lastOcc(nums,target,s,e,b);
        ans.push_back(l);
        ans.push_back(r);
        
        return ans;
        
    }
};