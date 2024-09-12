class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        {
            return false;
        }
        int c=x;
        long long ans=0;
        while(c)
        {
            int d=c%10;
            ans=ans*10+d;
            c=c/10;
        }
        if(ans==x)
        {
            return true;
        }
        return false;
    }
};