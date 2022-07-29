class Solution {
public:
    void setZeroes(vector<vector<int>>& M) 
    {
           
        int i,j;
        int rows=M.size();
        int cols=M[0].size();
        
        int col0=1;
        // setting the values of dummy array
        for(int i=0;i<rows;i++)
        {
            //checking if 0th col of any row is 0 or not
            if(M[i][0]==0)
                col0=0;
            
            for(int j=1;j<cols;j++)
            {
                if(M[i][j]==0)
                {
                    M[0][j]=0;
                    M[i][0]=0;
                }
            }
        }
        
        // now traverse the array in reverse and set the whole array in 0 according to dummy array values;
        
        for(int i=rows-1;i>=0;i--)
        {
            for(int j= cols-1;j>=1;j--)
            {
                //for rows and col
                if(M[i][0]==0 || M[0][j]==0)
                    M[i][j]=0;
            }
            //for col0; special case
                if(col0==0)
                {
                    M[i][0]=0;
                }
        }
        
    
    }
        
};