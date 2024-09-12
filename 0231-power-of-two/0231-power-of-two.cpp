class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<0)
        {
            return false;
        }
        int ans=0;

        while(n)
        {
            int d=n&1;
            if(d)
            {
                ans++;
            }
            n=n>>1;
        }

        if(ans==1)
        {
            return true;
        }
        else{
            return false;
        }
    }
};