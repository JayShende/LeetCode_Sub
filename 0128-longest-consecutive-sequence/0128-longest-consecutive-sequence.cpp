class Solution {
// Optimal Solution

private:
bool fun(unordered_set<int> st, int x)
{
    auto it=st.find(x);
    if(it==st.end())
    {
        return false;
    }
    return true;
}
public:
    int longestConsecutive(vector<int>& vec) {
    int n=vec.size();
    unordered_set<int> st;
    int count=1,longest=0;

    for(auto it:vec)
    {
        st.insert(it);
    }

   for(auto it:st)
    {   
        int x=it;
        if(st.find(x-1)==st.end())
        {   //cout<<x-1<<"a"<<endl;
            count=1;
            while(st.find(x+1)!=st.end())
            {   
                // cout<<x+1<<"b"<<endl;
                count++;
                x++;
                // cout<<count<<endl;
            }
        }

        longest=max(longest,count);
    }

    return longest;

    }
};