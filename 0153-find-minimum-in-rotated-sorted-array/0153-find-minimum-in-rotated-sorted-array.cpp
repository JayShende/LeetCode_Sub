class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0,high=nums.size()-1;
        int ans=INT_MAX;
        int mid;

        while(low<=high)
        {
            mid=low+(high-low)/2;

            // Find The Sorted Half
            if(nums[low]<=nums[mid])
            {
                // Left Sorted Array
                // Take The Min,then Eliminate The Left Part
                ans=min(ans,nums[low]);
                low=mid+1;
            }
            else{
                // Right Sorted Array ie nums[mid]<=nums[high]

                // Take The Min, Eliminate the Right Part
                ans=min(ans,nums[mid]);
                high=mid-1;
            }
        }

        return ans;
    }
};