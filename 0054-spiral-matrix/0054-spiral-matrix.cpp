class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& vec) {
        int n=vec.size();
        int m=vec[0].size();
        vector<int> ans;

        int left=0,right=m-1;
        int top=0,bottom=n-1;
        while(left<=right && top<=bottom)
        {
            // left to right
            for(int i=left; i<=right;i++)
            {
                ans.push_back(vec[top][i]);
            }
            top++;

            // Top to Bottom

            for(int i=top;i<=bottom;i++)
            {
                ans.push_back(vec[i][right]);
            }
            right--;

            // Right to Left

            if(top<=bottom)
            {
                for(int i=right;i>=left; i--)
                {
                    ans.push_back(vec[bottom][i]);
                }
                bottom--;
            }

            // Bottom to Top
            if(left<=right)
            {
                for(int i=bottom ;i>=top;i--)
                {
                    ans.push_back(vec[i][left]);
                }
                left++;
            }
        }

        return ans;
    }
};