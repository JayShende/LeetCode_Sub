class Solution {
private:
    int canPlace(vector<int> vec, int dist, int m)
    {
        int count=1,c=vec[0];

        for(int i=1;i<vec.size();i++)
        {
            if(vec[i]-c>=dist)
            {
                count++;
                c=vec[i];
            }
        }
        if(count>=m) return true;
        return false;
    }
public:
    int maxDistance(vector<int>& nums, int m) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int maxe=nums[n-1], min=nums[0];
        int ans=INT_MIN;
        int low=1,high=(maxe-min);
        int mid;
        while(low<=high)
        {
            mid=low+(high-low)/2;

            bool a=canPlace(nums,mid,m);
            if(a==true)
            {
                // mid can be my ans but i want the Biggest Num so
                // Move to the Right
                // Eliminate Left
                ans=max(ans,mid);
                low=mid+1;
            }
            else{
                // we are xpecting a big dist which might not be possible
                // move to the left
                high=mid-1;
            }
        }


        return ans;
    }
};