class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int start=0;
        int end=height.size()-1;
        
        int maxi=0;
        
        int water_ht;
        
        while(start<end)
        {
            water_ht=min(height[start],height[end]);
            
             maxi= max(maxi , (water_ht *(end-start)));
            
            if(height[start]<height[end])
                start++;
            else
                end--;
        }
        
        return maxi;
        
    }
};