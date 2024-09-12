class Solution {
public:
    int hammingWeight(uint32_t n) {
        // map<int,int> mpp;
        int c=0;
        while(n)
        {
            int d=n&1;
            if(d==1)
            {
                c++;
            }
            n=n>>1;
        }

        return(c);
    }
};