class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        // Constraints are Small Enough So Brute Force can work
        
        sort(nums.begin(),nums.end());

        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                ans.push_back(i);
            }
        }
        
        return ans;
    }
};