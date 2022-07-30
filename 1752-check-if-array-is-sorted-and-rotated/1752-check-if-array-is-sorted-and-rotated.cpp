class Solution {
public:
    bool check(vector<int>& arr) 
    {
        // the main logic is that if a the contains more than 1 pair for which arr[i-1]>arr[i] then the array is not sorted and rotated 
        
        // check for these pairs in array traversal and 
        // check seperately for arr[0]and arr[n]
        int n= arr.size();
        int count=0;
        if(arr[n-1]> arr[0])
            count++;
        
        for(int i=1;i<n;i++)
        {
            if(arr[i-1]>arr[i] )
                count++;
        }
        if(count>1)
            return false;
        else
            return true;
        
    }
};