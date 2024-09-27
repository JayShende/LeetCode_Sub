class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int i=0,j=1;
        while(i<n && j<n)
        {
            if(nums[i]==nums[j]) return true;
            i++;
            j=i+1;
        }

        return false;
    }
};