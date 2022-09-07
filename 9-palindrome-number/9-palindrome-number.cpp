class Solution {
    
    private:
    long int reverse(int n)
    {
        long int ans=0;
        
        while(n>0)
        {
           int digit= n%10;
            ans= ans*10+digit;
            n=n/10;
        }
        return ans;
    }
public:
    bool isPalindrome(int x) {
        
        if(x<0)
            return false;
        int rev= reverse(x);
        if(x==rev)
            return true;
        else
            return false;
    }
};