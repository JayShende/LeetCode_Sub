class Solution {
private:
    int fun(vector<vector<int>> vec, int i)
    {   
        int m=INT_MIN;
        int ans=-1;
        int n=vec[0].size();
        for(int a=0;a<n;a++)
        {
            if(vec[i][a]>m)
            {
                ans=a;
                m=vec[i][a];
            }
        }
        return ans;
    }
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();

        for(int i=0;i<n;i++)
        {
            int j=fun(mat,i);
            // mat[i][j] is the max ele among the row 
            // ie no need to check for L and R
            
            int left,right;

            // Check For top
            if(i==0)
            {
                left =-1;
            }
            else{
                left =mat[i-1][j];
            }

            // Check for Bottom
            if(i==(n-1))
            {
                right=-1;
            }
            else{
                right=mat[i+1][j];
            }
            int ele=mat[i][j];
            if(ele>left && ele > right)
            {
                return {i,j};
            }
        }

        return {-1,-1};
    }
};