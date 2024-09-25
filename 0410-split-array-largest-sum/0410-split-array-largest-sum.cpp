class Solution {
private:
    int maxelement(vector<int> vec)
    {
        int ans=INT_MIN;
        for(auto it:vec)
        {
            if(it>ans)
            {
                ans=it;
            }
        }

        return ans;
    }
    int sum(vector<int> vec)
    {
        int ans=0;
        for(auto it:vec)
        {
            ans=ans+it;
        }

        return ans;
    }

    int countStudents(vector<int> vec, int pagesLimit)
    {
        int count=1;
        int pages=0;

        for(int i=0;i<vec.size();i++)
        {
            if(pages+vec[i]<=pagesLimit)
            {
                pages=pages+vec[i];
            }
            else{
                count++;
                pages=vec[i];
            }
        }

        return count;
    }
public:
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        int low=maxelement(nums);
        int high=sum(nums);
        int mid;
        int ans=INT_MAX;

        while(low<=high)
        {
            mid=low+(high-low)/2;

            int a=countStudents(nums,mid);

            if(a==k)
            {
                // Can Be My ans but i want the smallest
                ans=min(ans,mid);
                high=mid-1;
            }
            else if(a<k)
            {
                // Books Allocated To Lees Num of Students
                // ie mid is a large num reduce that
                // eliminate the right sub Array
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }

        return low;
    }
};