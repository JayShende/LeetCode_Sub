class Solution {
private:
    long long timeReq(vector<int> vec,int i)
    {
        long long ans=0;
        for(auto it:vec)
        {
            ans=ans+ceil((double)(it)/(double)(i));
        }
        return ans;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        // Binary Search Approach

        int low=1,high=*max_element(piles.begin(),piles.end());
        long long mid;

        while(low<=high)
        {
            mid=low+(high-low)/2;

            long long time=timeReq(piles,mid);

            if(time<=h)
            {
                // ie Koko has eatan Banana in time less or equal to h, 
                // i want min walue of k so i move toward the left
                high=mid-1;
            } 
            else{
                low=mid+1;
            }
        }

        return low;
    }
};