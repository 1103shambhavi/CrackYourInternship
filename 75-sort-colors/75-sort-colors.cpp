class Solution {
public:
    void sortColors(vector<int>& nums) 
    {
        
        int n=nums.size();
       int zeros=0;
       int ones=0;
       int twos=0;
       for(int i=0;i<n;i++){
            if(nums[i]==0)zeros++;
            else if(nums[i]==1)ones++;
            else twos++;
        }
        int i=0,j=0,k=0,l=0;
        
        while(i<zeros)
        {
            nums[i]=0;
            i++;
            j++;
        }
        
        while(k<ones)
        {
            nums[j]=1;
            j++;
            k++;
        }
        
        while(l<twos)
        {
            nums[j]=2;
            j++;
            l++;
        }
    }   
};