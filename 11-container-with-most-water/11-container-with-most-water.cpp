class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int maxWater=INT_MIN;
        int waterstored;
        
        int s=0;
        int e=height.size()-1;
        
        while(s<=e)
        {
            waterstored=(e-s)*min(height[s],height[e]);
            
            maxWater=max(maxWater, waterstored);
            
            if(height[s]<height[e])
                s++;
            
            else
                e--;
        }
        
        return maxWater;
        
    }
};