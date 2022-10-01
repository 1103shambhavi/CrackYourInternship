class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) 
    {
        int row=matrix.size();
        int col=matrix[0].size();
        vector<int>drow(row,-1);
        vector<int>dcol(col,-1);
        
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    drow[i]=0;
                    dcol[j]=0;
                }
            }
        }
        
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(drow[i]==0 || dcol[j]==0)
                    matrix[i][j]=0;
            }
        }
        
    }
};