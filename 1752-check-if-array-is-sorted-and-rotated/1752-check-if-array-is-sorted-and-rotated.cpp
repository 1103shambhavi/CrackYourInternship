class Solution {
public:
    bool check(vector<int>& arr) 
    {
        
        int n= arr.size();
        int cnt=0;
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]>arr[i+1])
                cnt++;
        }
        
        //checking last and 1st pair
        if(arr[n-1]>arr[0])
            cnt++;
        
        
        if(cnt>1)
            return false;
        
        else 
            return true;
            
     
    }
};