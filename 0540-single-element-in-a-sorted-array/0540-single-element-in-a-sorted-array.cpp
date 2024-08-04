class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();

        if(n==1)
        {
            return nums[0];
        }

        if(nums[0]!=nums[1])
        {
            return nums[0];
        }
        if(nums[n-1]!=nums[n-2])
        {
            return nums[n-1];
        }

        int low=1,high=n-2;
        int mid;

        while(low<=high)
        {
            mid=low+(high-low)/2;

            if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1])
            {
                return nums[mid];
            }


            if((mid%2==0 && nums[mid]==nums[mid+1]) || (mid%2!=0 && nums[mid]==nums[mid-1]))
            {
                // Left Sorted Element on Right Eliminate Left Part
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }

        return mid;
    }
};