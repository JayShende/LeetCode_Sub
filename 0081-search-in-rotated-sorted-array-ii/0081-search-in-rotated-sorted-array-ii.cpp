class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int low=0,high=nums.size()-1;
        int mid;

        while(low<=high)
        {   
            mid=low+(high-low)/2;

            if(nums[mid]==target)
            {
                return true;
            }
            // Checking Edge Case
            if(nums[low]==nums[mid] && nums[mid]==nums[high])
            {
                low=low+1;
                high=high-1;
                continue;
            }

            // Finding The Sorted Part

            // Left Sorted
            if(nums[low]<=nums[mid])
            {
                if(nums[low]<=target && target<=nums[mid])
                {
                    // Eliminate the Right Search Space
                    high=mid-1;
                }
                else{
                    // Eliminate Left Search Space
                    low=mid+1;
                }
            }

            // Right Sorted 
            else if(nums[mid]<=nums[high])
            {
                if(nums[mid]<=target && target<=nums[high])
                {
                    // Eliminate Left Search Space
                    low=mid+1;
                }
                else{
                    // Eliminate Right Search Space
                    high=mid-1;
            
                }
            }
        }

        return false;
    }
};