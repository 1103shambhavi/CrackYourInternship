class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        
        int s = prices.size();
        int maxprofit = 0;
        int mini = INT_MAX;
        
        for(int i=0;i<s;i++)
        {
            mini = min(prices[i] , mini);
            
            maxprofit = max(prices[i]-mini , maxprofit);
                   
        }
        return maxprofit;
        
    }
};