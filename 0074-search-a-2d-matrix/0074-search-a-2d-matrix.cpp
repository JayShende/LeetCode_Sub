class Solution {
private:
    bool BinarySearch(vector<int> vec, int x)
    {
        int low=0,high=vec.size()-1;
        int mid;

        while(low<=high)
        {
            mid=low+(high-low)/2;
            if(vec[mid]==x) return true;
            if(x<vec[mid])
            {
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }

        return false;
    }
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();

        for(int i=0;i<n;i++)
        {
            vector<int> temp=matrix[i];
            if(BinarySearch(temp,target))
            {
                return true;
            }
        }
        return false;
    }
};