class Solution {
public:
    int reverse(int x) {
        long ans=0;
        while(x)
        {
            int d=x%10;
            
            ans=ans*10+d;
            if(ans-1<INT_MIN || ans+1>INT_MAX)
            {
                return 0;
            }
            x=x/10;

            
        }
        return ans;
    }
};