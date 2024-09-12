class Solution {
public:
    void reverseString(vector<char>& vec) {
        int low=0,high=vec.size()-1;

        while(low<=high)
        {
            swap(vec[low],vec[high]);
            low++;high--;
        }
    }
};