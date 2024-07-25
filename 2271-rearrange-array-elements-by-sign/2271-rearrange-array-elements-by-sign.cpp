class Solution {
public:
    vector<int> rearrangeArray(vector<int>& arr) {

        vector<int> ans(arr.size(),0);
        int pos=0,neg=1;

        for(auto it:arr)
        {
            if(it>0)
            {
                ans[pos]=it;
                pos+=2;
            }
            else{
                ans[neg]=it;
                neg+=2;
            }
        }
        

     
        return ans;

    }
};