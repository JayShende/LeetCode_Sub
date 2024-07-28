class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int ans=0;
        for(auto it:nums)
        {   
            if(it%3==0)
            {
                continue;
            }
            if((it-1)%3==0 || (it+1)%3==0)
            {
                ans++;
            }
            else if((it+2)%3==0 || (it-2)%3==0)
            {
                ans=ans+2;
            }
        }

        return ans;
    }
};