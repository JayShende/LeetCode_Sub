class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& vec) {
        int n=vec.size();
        map<int,int> mpp;
        vector<int> ans;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                mpp[vec[i][j]]++;
            }
        }

        for(auto it:mpp)
        {
            if(it.second==2)
            {
                ans.push_back(it.first);
                break;
            }
        }

        for(int i=1;i<=n*n;i++)
        {
            if(mpp[i]==0)
            {
                ans.push_back(i);
                break;
            }
        }

        return ans;

    }
};