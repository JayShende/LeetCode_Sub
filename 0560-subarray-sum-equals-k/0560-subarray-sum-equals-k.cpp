// OPtimal Solution

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        int n=nums.size();
        map<int,int> mpp;
        int ans=0,sum=0;
        mpp[0]=1;

        for(int i=0;i<n;i++)
        {
            sum=sum+nums[i];

            ans=ans+mpp[sum-k];
            mpp[sum]++;
        }

       
        return ans;
    }
};