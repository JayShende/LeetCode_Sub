class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        
        set<vector<int>> st2;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {   
                set<long long> st;
                for(int k=j+1;k<n;k++)
                {   
                    long long sum=(long long)nums[i]+nums[j]+nums[k];
                    long long l = (long long)target-sum;

                    if(st.find(l)!=st.end())
                    {
                        vector<int> temp={nums[i],nums[j],nums[k],(int)l};
                        sort(temp.begin(),temp.end());
                        st2.insert(temp);
                    }
                    else{
                        st.insert(nums[k]);
                    }
                }
            }
        }

        vector<vector<int>> ans(st2.begin(),st2.end());
        return ans;
    }
};