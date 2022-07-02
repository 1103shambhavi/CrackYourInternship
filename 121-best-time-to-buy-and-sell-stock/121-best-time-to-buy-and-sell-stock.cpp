class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        
        int s = prices.size();
        int maxprofit = 0;
        int mini = INT_MAX;
        
        for(int i=0;i<s;i++)
        {
            if(prices[i]<mini)
            {
                mini=prices[i];
            }
            
            if(prices[i]>mini  &&  prices[i]-mini > maxprofit)
                maxprofit= prices[i]-mini;
                   
        }
        return maxprofit;
        
    }
};