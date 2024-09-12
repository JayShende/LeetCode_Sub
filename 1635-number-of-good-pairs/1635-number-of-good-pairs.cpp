class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int ans=0,n=nums.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i!=j && i<j)
                {
                    if(nums[i]==nums[j])
                    {
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
};