class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int n= prices.size();
        int buy=INT_MAX;
        int maxprofit=0;
        
        for(int i=0;i<n;i++)
        {
            //finding minimum of all values
            if(prices[i]<buy)
            {
                buy=prices[i];
            }
            
            //if the p[i] is greater than buy then check if the profit(prices[i]-buy >     maxprofit then update)
            
            else if( prices[i]-buy > maxprofit)
                maxprofit= prices[i]-buy;
        }
        
        return maxprofit;
        
    }
};