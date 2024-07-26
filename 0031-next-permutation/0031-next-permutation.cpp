class Solution {
public:
    void nextPermutation(vector<int>& vec) {
        
        int i=-1;

        // Finding the Break point in the Curve
        for(int a=vec.size()-1;a>0;a--)
        {
            if(vec[a]>vec[a-1])
            {
                i=a-1;
                break;
            }
        }

        if(i==-1)
        {
            reverse(vec.begin(),vec.end());
            return;
            // Handling an Edge Case ie when all Element are in Decending order ex vec={54321};
            // then in Such Case the Next Permutation will be Reverse of All The Elements
        }

        // Finding an Element > vec[i] towards RHS of the i;

        int j;
        for(j=vec.size()-1;j>i;j--)
        {
            if(vec[j]>vec[i])
            {
                break;
            }
        }

        swap(vec[i],vec[j]);

        reverse(vec.begin()+i+1,vec.end());
        return;
    }
};