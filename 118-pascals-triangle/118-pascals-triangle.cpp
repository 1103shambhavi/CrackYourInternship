class Solution {
public:
    vector<vector<int>> generate(int numRows) 
    {
        vector<vector<int>> ans(numRows);
        
        for(int i=0;i<numRows;i++)
        {
            ans[i].resize(i+1);
            //making the 1st and last entry to 1 
            ans[i][0]=ans[i][i]=1;
            
            //assigning the values of rest of columns
            //iterating from col 1 to col i-1;
            
            for(int j=1;j<i;j++)
                ans[i][j]= ans[i-1][j-1] + ans[i-1][j];
        }
        
        return ans;
        
        
       /* vector<vector<int>> r(numRows);

        for (int i = 0; i < numRows; i++) {
            r[i].resize(i + 1);
            r[i][0] = r[i][i] = 1;
  
            for (int j = 1; j < i; j++)
                r[i][j] = r[i - 1][j - 1] + r[i - 1][j];
        }
        
        return r;
        */
    }
};