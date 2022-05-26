// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n)
    {
        
        // Your code here
        int max_so_far      = INT_MIN;
        int max_ending_here = 0;
        int max_element     = INT_MIN;

        for (int i = 0; i < n; i++)
        {
             max_ending_here = max(max_ending_here + arr[i], 0);
             max_so_far      = max(max_ending_here, max_so_far);
             max_element     = max(max_element, arr[i]);
        }

        if (max_so_far == 0)
        {
             max_so_far = max_element;
        }
        return max_so_far;
    }
        
        
       
    };

// { Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends