class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> vec;
        int ans=0;
        for(auto it:nums)
        {
            if(it==val)
            {
                continue;
            }
            else{
                vec.push_back(it);
                ans++;
            }
        }
        // Hello Hello Test
        nums=vec;
        return ans;
    }
};