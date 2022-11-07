class Solution {
public:
    int maximum69Number (int num) 
    {
        vector<int> digits;
        //extract digits from num
        
        while(num>0)
        {
            int digi = num%10;
            digits.push_back(digi);
            num=num/10;
        }
        
       
        
        reverse(digits.begin(),digits.end());
        //change one 6
        for(int i=0;i<digits.size();i++)
        {
            if(digits[i]==6)
            {
                digits[i]=9;
                break;
            }
        }
        
      
        
        //form number from digit
        int n=0;
        for(int i=0;i<digits.size();i++)
        {
            int dig = digits[i];
            n=n*10 + dig;
        }
        
        return n;
        
    }
};