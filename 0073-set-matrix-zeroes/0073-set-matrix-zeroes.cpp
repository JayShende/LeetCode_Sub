class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
      // Optimal Approach
        int n=matrix.size(), m=matrix[0].size();
        // Row - matrix[0][..]
        // col matrix[..][0]
        int col0=1;

        // Step 1 Mark Yellow and Orange 

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==0)
                {
                    // Mark Row
                    if(j==0)
                    {
                        col0=0;
                    }
                    else{
                        matrix[0][j]=0;
                    }

                    // Mark Col
                    matrix[i][0]=0;
                }
            }
        }

    // Set All Elements Excepy Yellow and Orange

    for(int i=1;i<n;i++)
    {
        for(int j=1;j<m;j++)
        {
            // Check Row and Col

            if(matrix[0][j]==0 || matrix[i][0]==0)
            {
                matrix[i][j]=0;
            }
        }
    }


    // Set Yellow ie row

    if(matrix[0][0]==0)
    {
        for(int j=1;j<m;j++)
        {
            matrix[0][j]=0;
        }
    }

    // Set Orange ie Col

    if(col0==0)
    {
        for(int i=0;i<n;i++)
        {
            matrix[i][0]=0;
        }
    }











    }
};