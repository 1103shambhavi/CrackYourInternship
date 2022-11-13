class Solution {
public:
     void subset_sum(int sum,vector<int> &ar,int i,vector<int> &v,vector<vector<int>> &ans)
         {
        if(i==ar.size()){
            ans.push_back(v);
            return;
        }
        v.push_back(ar[i]);
        sum+=ar[i];
        subset_sum(sum,ar,i+1,v,ans);
        v.pop_back();
        sum-=ar[i];
        subset_sum(sum,ar,i+1,v,ans);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        int sum =0;
        int i=0;
        vector<int>v;
        subset_sum(sum,nums,i,v,ans);
        return ans;
    }
};