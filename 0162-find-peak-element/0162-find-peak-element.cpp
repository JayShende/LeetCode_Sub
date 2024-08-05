class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();

        if(n==1)
        {
            return 0;
        }

        if(nums[0]>nums[1])
        {
            return 0;
        }

        if(nums[n-1]>nums[n-2])
        {
            return n-1;
        }

        int low=1,high=n-2;
        int mid;

        while(low<=high)
        {
            mid=low+(high-low)/2;

            // Check if Mid is the Peak or Not

            if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1])
            {
                return mid;
            }

            // Checking Inc Slope
            if(nums[mid]<nums[mid+1])
            {
                // Eliminate Left Part
                low=mid+1;
            }
            else{
                // Desc Slope ie Eliminate Right Part cond. -> nums[mid]>nums[mid+1]
                high=mid-1;
            }
        }

        return -1;
    }
};