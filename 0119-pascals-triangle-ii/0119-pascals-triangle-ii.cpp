class Solution {
public:
    vector<int> getRow(int n) {
        vector<int> ans;
        for(int i=0;i<=n;i++)
        {   
            long long  a=1;
            for(int j=0;j<i;j++)
            {
                a=(long long)a*(n-j);
                a=a/(j+1);
            }
            ans.push_back(a);
        }

        return ans;
    }
};