class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int ans=INT_MIN;

        for(int i=0;i<n;i++)
        {   
            int var=1;
            for(int j=i;j<n;j++)
            {
                var=var*nums[j];
                ans=max(ans,var);
            }
        }

        return ans;
    }
};