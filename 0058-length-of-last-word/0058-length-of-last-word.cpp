class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans=1;
        char str=' ';
        int ind=-1;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]!=str)
            {
                ind=i;
                break;
            }
            
        }

        for(int i=ind;i>=1;i--)
        {
            if(s[i-1]==str)
            {
                return ans;
            }
            ans++;
        }
        return ans;
    }
};