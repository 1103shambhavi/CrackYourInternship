class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& b) 
    {
        unordered_set<int> s;
        vector<int> v;
        int count=0;
        for(int i=0;i<9;i++)
        {
            s.clear();
            v.clear();
            for(int j=0;j<9;j++)
            {
                if(b[i][j]!='.')
                {
                    v.emplace_back(b[i][j]);
                    s.insert(b[i][j]);
                }
            }
            if(v.size()!=s.size()) return false;
        }
        
        cout<<1;
        
        for(int i=0;i<9;i++)
        {
            s.clear();
            v.clear();
            for(int j=0;j<9;j++)
            {
                if(b[j][i]!='.')
                {
                    v.emplace_back(b[j][i]);
                    s.insert(b[j][i]);
                }
            }
            if(v.size()!=s.size()) return false;
        }
        
        cout<<2;
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(b[i][j]!='.')
                {
                    count=0;
                    int r=i/3; r*=3;
                    int c=j/3; c*=3;
                    for(int x=r;x<r+3;x++)
                    {
                        for(int y=c;y<c+3;y++)
                        {
                            if(b[i][j]==b[x][y]) count++;
                        }
                    }
                    
                    if(count!=1) return false;
                }
            }
        }
        
        cout<<3;
        
        return true;
        
        
        
    }
};