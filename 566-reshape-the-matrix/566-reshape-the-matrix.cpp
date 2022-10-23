class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) 
    {
        vector<vector<int>>ans(r, vector<int>(c));
        
        if(r*c != mat.size()*mat[0].size())
            return mat;
        
        int row=0;
        int col=0;
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
                ans[row][col]=mat[i][j];
                col++;
                //if you rach at the end of row ie at last col increase the row                         and reset the col to 0
                
                if(col ==c)
                {
                    row++;
                    col=0;
                }
            }
        }
        return ans;
    }
};