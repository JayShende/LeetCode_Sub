class Solution {
public:

    int fun(vector<int> &vec)
    {
        int max=vec[0];
        for(auto it:vec)
        {
            if(it>max)
            {
                max=it;
            }
        }
        return max;
    }
    int maximumWealth(vector<vector<int>>& acc) {
        vector<int> ans;
        int n=acc.size();
        int m=acc[0].size();
        for(int i=0;i<n;i++ )
        {   
            int sum=0;
            for(int j=0;j<m;j++)
            {
                sum=sum+acc[i][j];
            }
            ans.push_back(sum);
        }
        int a=fun(ans);
        return a;
    }
};