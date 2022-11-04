class Solution {
    private:
    bool isvowel(char ch)
    {
        if((ch == 'a'||ch == 'e'||ch == 'i'||ch == 'o'||ch == 'u') ||                     (ch == 'A'||ch == 'E'||ch == 'I'||ch == 'O'||ch == 'U'))
           return true;
           
           else
           return false;
    }
    
public:
    string reverseVowels(string s) 
    {
        vector<char>vowel;
       for(auto i :s)
       {
           if(isvowel(i))
               vowel.push_back(i);
       }
        
       reverse(vowel.begin(),vowel.end());
        
        int cnt=0;
        for(int i=0;i<s.size();i++)
        {
            if(isvowel(s[i]))
            {
                s[i]=vowel[cnt++];
            }
        }
        return s;
    }
};