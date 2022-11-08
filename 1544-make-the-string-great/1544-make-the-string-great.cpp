class Solution {
public:
    string makeGood(string s) 
    {   
        int i;
        stack<char> st;
        char x;
        string str="";
        for(i=0;i<s.size();++i)
        {
            if(st.empty())
                st.push(s[i]);
            else
            {
                x = st.top();
                if(isupper(s[i]))
                {
                    if(islower(x) && toupper(x)==s[i])
                        st.pop();
                    else
                        st.push(s[i]);
                }
                if(islower(s[i]))
                {
                    if(isupper(x) && tolower(x)==s[i])
                        st.pop();
                    else
                        st.push(s[i]);
                }
            }
        }
        while(!st.empty())
        {
            x = st.top();
            str=str+x;
            st.pop();
        }
        reverse(str.begin(),str.end());
        return str;
    }
};