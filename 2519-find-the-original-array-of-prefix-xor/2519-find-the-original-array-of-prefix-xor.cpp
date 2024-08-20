class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int a=pref[0],n=pref.size();
        vector<int> ans(n,0);
        ans[0]=a;

        for(int i=1;i<n;i++)
        {
            ans[i]=a^pref[i];
            a=a^ans[i];
        }

        return ans;
    }
};