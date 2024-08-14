class Solution {
public:
    vector<int> findPeaks(vector<int>& vec) {
        vector<int> ans;
        int n=vec.size();

        for(int i=1;i<=n-2;i++)
        {
            if(vec[i]>vec[i-1] && vec[i]>vec[i+1])
            {
                ans.push_back(i);
            }
        }

        return ans;
    }
};