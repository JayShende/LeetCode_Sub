class Solution {
private:
    int FirstOccurence(vector<int> vec, int low, int high, int target)
    {
        int ans=-1;
        int mid;

        while(low<=high)
        {   
            mid=low+(high-low)/2;

            if(vec[mid]==target)
            {
                ans=mid;
                high=mid-1;
            }
            else if(target>vec[mid])
            {
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
    }

    int LastOccurence(vector<int> vec, int low, int high, int target)
    {
        int ans=-1;
        int mid;

        while(low<=high)
        {
            mid=low+(high-low)/2;

            if(vec[mid]==target)
            {
                ans=mid;
                low=mid+1;
            }
            else if(target>vec[mid])
            {
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    return ans; 
    }


public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int> ans;
        ans.push_back(FirstOccurence(nums,0,nums.size()-1,target));
        ans.push_back(LastOccurence(nums,0,nums.size()-1,target));

        return ans;
    }
};