class Solution {
private:
    int SearchRotatedArray(vector<int>vec, int target)
    {
        int low=0,high=vec.size()-1;
        int mid;

        while(low<=high)
        {
            mid=low+(high-low)/2;

            if(vec[mid]==target)
            {
                return mid;
            }
            // Find The Sorted Space

            // Checking For Left Sorted Array
            if(vec[low]<=vec[mid])
            {
                if(vec[low]<=target && target<=vec[mid])
                {
                    // Eliminate Right Search Space
                    high=mid-1;
                }
                else{
                    // Eliminate Left Search Spce
                    low=mid+1;
                }
            }

            // Checking For Right Sorted Array
            else if(vec[mid]<=vec[high])
            {
                if(vec[mid]<=target && target<=vec[high])
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
        return -1;
    }



public:
    int search(vector<int>& nums, int target) {
     return(SearchRotatedArray(nums,target))   ;
    }
};