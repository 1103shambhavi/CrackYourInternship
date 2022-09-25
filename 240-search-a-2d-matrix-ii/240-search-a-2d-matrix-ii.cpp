class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target)  
    {
        int row=matrix.size();
        int col=matrix[0].size();
        
        //seting our element to 15ir row=0;col=last
        int row_index=0;
        int col_index=col-1;
        
        while(row_index<row && col_index>=0)
        {
            int ele=matrix[row_index][col_index];
            if(ele==target)
                return true;
            
            else if(ele>target)
                col_index--;
            
            else
                row_index++;
        }
        
        return false;
    }
};