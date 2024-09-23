class Solution {
private:
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
    long long Sum(vector<int> vec, float x)
    {
        long long ans=0;
        for(auto it:vec)
        {
            ans=(long long)ans+ceil(it/x);
        }
        return ans;
    }
public:
    int smallestDivisor(vector<int>& nums, int t) {
        int low=1, high=MaxElement(nums);
        int mid;
        int ans=INT_MAX;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            int a=Sum(nums,mid);

            if(a<=t)
            {
                // Can BE My answer But I want The Smallest
                ans=min(ans,mid);
                // Since I want the Smallest Elment i will Find the Left Search Space
                // Eliminate the Right Search Space
                high=mid-1;
            }
            else{
                // a>t
                // Eliminate the Left Search Space
                low=mid+1;
            }
        }

        return ans;

    }
};