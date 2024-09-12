class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n= arr.size();
        int start = 0, end = n - 1;
        int mid;

    while (start <= end)
    {
         mid = start + (end - start) / 2;

        if ((arr[mid] > arr[mid + 1]) && (arr[mid] > arr[mid - 1]))
        {
            return (mid);
        }
        else if (arr[mid] > arr[mid + 1]) //  Right Side Array Move Toward left
        {
            end = mid ;
        }
        else
        {
            // arr[mid]>arr[mid-1] //  Left Side Array Move Toward Right
            

            start = mid + 1;
        }
    }
    return (0);
    }
};