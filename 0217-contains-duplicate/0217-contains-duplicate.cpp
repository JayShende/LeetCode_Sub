class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
        map<int,int> mpp;

        for(auto it:nums)
        {
            mpp[it]++;
        
        }

        for(auto it:mpp)
        {
            if(it.second>=2) return true;
        }

        return false;

    }
};