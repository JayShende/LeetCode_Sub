class Solution {
private:
    int NumBouquet(vector<int> vec, int k, int day)
    {
        int ans=0;
        int count=0;
        for(auto it:vec)
        {
            if(it<=day)
            {
                count++;
            }
            else{
                ans=ans+(count/k);
                count=0;
            }
        }
        ans=ans+(count/k);
        return ans;
    }

    int MinElement(vector<int> vec)
    {
        int ans=INT_MAX;
        for(auto it:vec)
        {
            if(it<ans)
            {
                ans=it;
            }
        }

        return ans;
    }

    int MaxElement(vector<int> vec)
    {
        int ans=INT_MIN;
        for(auto it:vec)
        {
            if(it>ans)
            {
                ans=it;
            }
        }

        return ans;
    }
public:
    int minDays(vector<int>& nums, int m, int k) {
        long long m1=m,k1=k;
        if((long long)(m1*k1)>nums.size()) return -1;

        int ans=INT_MAX;
        int low=MinElement(nums), high=MaxElement(nums);
        int mid;

        while(low<=high)
        {
            mid=low+(high-low)/2;

            int num=NumBouquet(nums,k,mid);

            if(num>=m)
            {
                ans=min(ans,mid);
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }

        return ans;
    }
};