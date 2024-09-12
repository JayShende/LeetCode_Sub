class Solution {
public:
    int mostWordsFound(vector<string>& str) {
        int ans=0;
        for(auto it:str)
        {
            string str2=it;
            int c=0;
            for(int i=0;i<str2.size();i++)
            {
                if(isspace(str2[i]))
                {
                    c++;
                }
            }
            ans=max(ans,c+1);
        }
        return ans;
    }
};