class Solution {
public:
    int findMin(vector<int>& vec) {
        if(vec.size()==1) return vec[0];
        int low=0,high=vec.size()-1;
        int mid;
        int ans=INT_MAX;

        while(low<=high)
        {
            mid=low+(high-low)/2;

            // Checking The Edge Case ie vec[low]==vec[mid]==vec[high]

            if(vec[low]==vec[mid] && vec[mid]==vec[high])
            {   
                ans=min(ans,vec[mid]);
                low++;  
                high--;
                continue;
            }

            // Finding the Sorted half

            if(vec[low]<=vec[mid])
            {
                // Left Sorted Array
                ans=min(ans,vec[low]);

                // Eliminate the left Part
                low=mid+1;
            }
            else{
                // Right Sorted Array ie vec[mid]<=vec[high]

                ans=min(ans,vec[mid]);

                // Eliminate The Right Part
                high=mid-1;
            }
        }

        return ans;
    }
};