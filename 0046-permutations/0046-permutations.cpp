class Solution {
private:
    void fun(int ind, vector<int> nums, vector<vector<int>> &ans)
    {
        if(ind==nums.size())
        {
            ans.push_back(nums);
            return;
        }

        for(int i=ind;i<nums.size();i++)
        {
            swap(nums[ind],nums[i]);
            fun(ind+1,nums,ans);
            swap(nums[ind],nums[i]);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        fun(0,nums,ans);

        return ans;
    }
};