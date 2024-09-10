//  Optimal Approach a Slight Modifiacation of Moore's Voting Algorithm

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int count1=0,count2=0;
        int ele1=INT_MIN,ele2=INT_MIN;
        
        vector<int> ans;

        for(int i=0;i<n;i++)
        {
            if(count1==0 && ele2!=nums[i])
            {
                ele1=nums[i];
                count1=1;
            }
            else if(count2==0 && ele1!=nums[i])
            {
                ele2=nums[i];
                count2=1;
            }
            else if(nums[i]==ele1) count1++;
            else if(nums[i]==ele2) count2++;
            else{
                count1--;
                count2--;
            }
        }

        int a=0,b=0;
        for(auto it:nums)
        {
            if(it==ele1) a++;
            if(it==ele2) b++;
        }
        if(a>(n/3))
        {
            ans.push_back(ele1);
        }
        if(b>(n/3) )
        {
            ans.push_back(ele2);
        }

        return ans;
    }
};