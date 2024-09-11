class Solution {
private:
    int mergeSort(vector<int> &vec, int low, int high)
    {
        int count=0;
        if(low<high)
        {   
            int mid=low+(high-low)/2;
            count+=mergeSort(vec,low,mid);
            count+=mergeSort(vec,mid+1,high);
            count+=merge(vec,low,mid,high);
        }

        return count;
    }

    int merge(vector<int> &vec, int low, int mid, int high)
    {
        vector<int> temp; 
        int count=0;
        int left=low; int right=mid+1;

        // Counting Reverse pairs
        for(int i=low;i<=mid;i++)
        {
            while(right<=high && vec[i]>(long long)2*vec[right])
            {
                right++;
            }
            count+=(right-(mid+1));
        }

        left=low;
        right=mid+1;

        while(left<=mid && right<=high)
        {
            if(vec[left]<=vec[right])
            {
                temp.push_back(vec[left]);
                left++;
            }
            else{
                temp.push_back(vec[right]);
                right++;
            }
        }

        while(left<=mid)
        {
            temp.push_back(vec[left]);
            left++;
        }

        while(right<=high)
        {
            temp.push_back(vec[right]);
            right++;
        }
        // temp=vec;
        for (int i = low; i <= high; i++) {
            vec[i] = temp[i - low];
        }
        return count ;
    }

public:
    int reversePairs(vector<int>& nums) {
        return mergeSort(nums,0,nums.size()-1);
    }
};