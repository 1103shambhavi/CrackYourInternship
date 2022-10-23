class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2)
    {
        vector<int>ans;
        unordered_map<int,int>fre;
        for(int i=0;i<nums1.size();i++)
        {
            fre[nums1[i]]++;
           
        }
        
        for(int j=0;j<=nums2.size()-1;j++)
        {
            if(fre.find(nums2[j])!=fre.end() && fre[nums2[j]]>0)
            {
                ans.push_back(nums2[j]);
                fre[nums2[j]]--;
            }
        }
        return ans;
    }
};