class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int starting_col=0;
        int ending_col=matrix[0].size()-1;
        
        int starting_row=0;
        int ending_row=matrix.size()-1;
        
        int count=0;
        vector<int>ans;
        int total = matrix.size()*matrix[0].size();
            while(count<total)
        {
            //print top row
            for(int i=starting_col;i<=ending_col && count<total;i++)
            {
                ans.push_back(matrix[starting_row][i]);
                count++;
            }
            starting_row++;
            
            //printing last col
            for(int i=starting_row;i<=ending_row  && count<total;i++)
            {
                ans.push_back(matrix[i][ending_col]);
                count++;
            }
            ending_col--;
            
            //for printing last row
            for(int i=ending_col;i >= starting_col  && count<total;i--)
            {
                ans.push_back(matrix[ending_row][i]);
                count++;
            }
            ending_row--;
            
            //for printing 1st col
            for(int i=ending_row; i>=starting_row  && count<total ;i--)
            {
                ans.push_back(matrix[i][starting_col]);
                count++;
            }
            starting_col++;
            
            
        }
        return ans;
    }
};