class Solution {
public:
    bool areNumbersAscending(string s) {
        int prev=-1;
        string str="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='0'&&s[i]<='9')
            {
               str+=s[i];
                continue;
            }
            if(prev==-1&&str!="")
            {
                int temp=stoi(str);
                prev=temp;
                str="";
                continue;
            }
            if((prev!=-1&&str!=""))
            {
                    int temp=stoi(str); 
                    if(temp<=prev)
                        return false;
                    else
                        prev=temp;
                    str="";
            }
            
        }   
        if(str!="")
        {
            int temp=stoi(str);
            if(temp<=prev)
              return false;
        }
        
        return true;
    }
};