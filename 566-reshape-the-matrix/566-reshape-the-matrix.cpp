class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m=mat.size(),n=mat[0].size(),x=0,y=0;
        vector<vector<int>>result(r,vector<int>(c));
        if(n*m !=r*c) return mat;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                result[x][y++]=mat[i][j];
                if(y==c)
                {
                    x++;
                    y=0;
                }    
            }
        }
        return result;
    }
};
