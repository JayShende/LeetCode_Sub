class Solution {
public:
    bool isIsomorphic(string s, string t) {

        if(s.size()!=t.size())    return false;

        map<char,char> mpp1,mpp2;
        bool ans=true;
        
        for(int i=0;i<s.size();i++)
        {
            if(mpp1.find(s[i])==mpp1.end())
            {
                mpp1[s[i]]=t[i];
            }
            else{
                // Has Been either Mapped before then check if mapped to correct digit or not;
                if(mpp1[s[i]]!=t[i])
                {
                    return false;
                }
            }
        }

        for(int i=0;i<t.size();i++)
        {
            if(mpp2.find(t[i])==mpp2.end())
            {
                mpp2[t[i]]=s[i];
            }
            else{
                // Has Been either Mapped before then check if mapped to correct digit or not;
                if(mpp2[t[i]]!=s[i])
                {
                    return false;
                }
            }
        }

        return ans;
    }
};