class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        
        int n=mat.size(),m=mat[0].size();
        int count=0;
        int a,b;
        for(int i=0;i<n;i++)
        {
            int c=0;
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]==1)
                {
                    c++;
                }
            }
            if(c>count)
            {
                a=i;
                b=c;
                count=c;
            }
        }
        if(count==0)
        {
            return{0,0};
        }


        vector<int> ans={a,b};
        return ans;
    }
};