class Solution {
public:
    int maxSubArray(vector<int>& vec) {
        int ans=INT_MIN;
        int sum=0;

        for(auto it:vec)
        {
            sum=sum+it;
            ans=max(ans,sum);
            if(sum<0)
            {
                sum=0;
            }

            
        }  
        return ans;
    }
};