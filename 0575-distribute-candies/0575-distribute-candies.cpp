class Solution {
public:
    int distributeCandies(vector<int>& nums) {
        int n=nums.size();
        set<int> st;

        for(auto it:nums)
        {
            st.insert(it);
        }
        int a=st.size();
        if(a<=(n/2)) return a;
        return n/2;
        
    }
};