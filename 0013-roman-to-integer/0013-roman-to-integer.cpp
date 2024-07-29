class Solution {
public:
    int romanToInt(string s) {
        int ans=0;
        map<char,int> mpp={{'I',1},
        {'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}
        };
        int i=0;
        while(i<s.size())
        {
            if(mpp[s[i]]<mpp[s[i+1]])
            {
                ans=ans+mpp[s[i+1]]-mpp[s[i]];
                i=i+2;
            }
            else{
                ans=ans+mpp[s[i]];
                i++;
            }
        }

        return ans;
    }
};