class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int a,b;
        int ans=INT_MIN;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]>ans)
                {
                    ans=mat[i][j];
                    a=i; b=j;
                }
            }
        }

        return {a,b};

    }
};