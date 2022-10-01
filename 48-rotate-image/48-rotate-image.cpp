class Solution {
public:
    void rotate(vector<vector<int>>& matrix) 
    {
        //step 1 reverse the array
        reverse(matrix.begin(),matrix.end());
        
        vector<vector<int>>temp;
        //step 2 take transpose ie make rows as columns
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<i;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        
        
    }
};