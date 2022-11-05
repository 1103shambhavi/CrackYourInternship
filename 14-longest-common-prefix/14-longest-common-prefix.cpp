class Solution {
public:
    string longestCommonPrefix(vector<string>& s) 
    {
        sort(s.begin(),s.end());
        
        string first = s[0];
        string last = s[s.size()-1];
        
        int i=0;
        int j=0;
        
        string ans = "";
        while(i<first.size() && j<last.size())
        {
            if(first[i]==last[j])
            {
                ans+=first[i];
                i++;
                j++;
            }
            else
                break;
        }
        return ans;
        
    }
};