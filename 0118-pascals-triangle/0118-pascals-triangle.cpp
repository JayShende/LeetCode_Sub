class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;

        for(int n=0;n<numRows;n++)
        {   int a=1;
            vector<int> temp;
            temp.push_back(a);
            for(int i=0;i<n;i++)
            {
                a=a*(n-i);
                a=a/(i+1);
                temp.push_back(a);
            }
            ans.push_back(temp);
        }

        return ans;
    }
};