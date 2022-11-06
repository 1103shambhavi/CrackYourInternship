class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
    
        
        
        for(int i=0;i<nums1.size();i++)
        {
            
            //find the position of nums1 in nums2
            int pos ;
            for(int j=0;j<nums2.size();j++)
            {
                if(nums2[j]==nums1[i]){
                    pos=j; break;
                }
            }
            //cout<<pos<<endl;
            
            int val = -1;
            for(int j=0;j<nums2.size();j++)
            {   
                if(nums2[j]>nums1[i] && j>pos )
                {
                    val= nums2[j];
                    break;
                }
                
            }
            ans.push_back(val);
        }
        return ans;
    }
};