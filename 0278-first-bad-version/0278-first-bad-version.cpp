// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low=1,high=n;
        int mid,ans=-1;

        while(low<=high)
        {
            mid=low+(high-low)/2;

            if(isBadVersion(mid))
            {
                ans=mid;

                // i want Minimum So Eliminate Right
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }

        return ans;
    }
};