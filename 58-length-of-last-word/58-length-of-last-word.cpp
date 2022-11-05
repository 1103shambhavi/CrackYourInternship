class Solution {
public:
    int lengthOfLastWord(string s) 
    {
        int n= s.size();
        reverse(s.begin(),s.end());
        
        int cnt=0;
        int i=0;
        
        while(i<n)
        {
            if(s[i]!=' ')
                break;
            else
                i++;
        }
        
        //start point =i;
        
        while(i<n && s[i] != ' ')
        {
            cnt++;
            i++;
        }
        
        return cnt;
        
    }
};