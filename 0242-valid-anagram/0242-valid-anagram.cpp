class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.size()!=t.size())  return false;
        if(s==t) return true;

        map<char,int> mpp1,mpp2;

        for(auto it:s)
        {
            mpp1[it]++;
        }

        for(auto it:t)
        {
            mpp2[it]++;
        }

        for(auto it:s)
        {
            if(mpp1[it]!=mpp2[it])
            {
                return false;
            }
        }

        return true;
    }
};