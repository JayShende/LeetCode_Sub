class Solution {
private:
    void fun(vector<int>& vec, int i)
    {   
        int n=vec.size();
        int a;
        for(a=i;a<n;a++)
        {
           if(vec[a]==-1) break;
        }

        for(int j=a;j>i;j--)
        {
            vec[j]=vec[j-1];
        }
    }
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int n=nums.size();

        vector<int> target(n,-1);

        for(int i=0;i<n;i++)
        {   
            if(target[index[i]]!=-1)
            {
                fun(target,index[i]);
            }
            target[index[i]]=nums[i];
        }

        return target;
    }
};