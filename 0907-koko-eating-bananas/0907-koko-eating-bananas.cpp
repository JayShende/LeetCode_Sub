class Solution {
private:
    int TimeReq(vector<int> vec, double x)
    {
        int ans=0;
        for(auto it:vec)
        {
            ans=ans+ceil(it/x);
        }

        return ans;
    }
    int MaxElement(vector<int> vec)
    {   
        if(vec.size()==1) return vec[0];
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
int minEatingSpeed(vector<int> nums, int h) {
        int low=1, high=MaxElement(nums);
        long long mid;
        long long ans=INT_MAX;

        while(low<=high)
        {
            mid=low+(high-low)/2;
            int a=TimeReq(nums,mid);

            if(a<=h)
            {
                // Can Be My Ans
                ans=min(ans,mid);
                //  i wanna inc time to reach h
                // to inc time reduce deno (x)
                // move to left search space
                // eliminate the right one
                 high=mid-1;
            }
            else
            {
                // Time Req > h 
                // We Need To Reduce the Time Req --> inc deno ie mid
                // To Increase Mid we Need to Move to the Right Sub Array
                // Eliminate the Left Sub Array
                low=mid+1;
            }
            
        }

        return ans;
    }
};

















