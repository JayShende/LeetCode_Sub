class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int a=n-1,ans=0;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==j)
                {
                    ans=ans+mat[i][j];
                }
            }
            ans=ans+mat[i][a];
            a--;
        }

        if(n%2!=0)
        {
            ans=ans-mat[n/2][n/2];
        }

        return ans;
    }
};