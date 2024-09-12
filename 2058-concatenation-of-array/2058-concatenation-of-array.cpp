class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> vec;
        int a=2;

        while(a--)
        {
            for(auto it:nums)
            {
                vec.push_back(it);
            }
        }
        return vec;
    }
};