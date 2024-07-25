class Solution {
public:
    void swap(int &a, int &b)
    {
        int temp=a;
        a=b;
        b=temp;
    }
    void sortColors(vector<int>& vec) {
        int low=0, mid=0,high=vec.size()-1;

        while(mid<=high)
        {
            if(vec[mid]==0)
            {
                swap(vec[mid], vec[low]);
                low++;
                mid++;
            }

            else if(vec[mid]==1)
            {
                mid++;
            }

            else if(vec[mid]==2)
            {
                swap(vec[mid], vec[high]);
                high--;
            }
        }
    }
};