class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        sort(str.begin(),str.end());

        string comp1=str[0],comp2=str[str.size()-1];

        int i=0,j=0;
        string ans="";
        while(i<comp1.size() && j<comp2.size())
        {
            if(comp1[i]==comp2[j])
            {
                ans=ans+comp1[i];
                i++;
                j++;
            }
            else
            {
                break;
            }
        }

        return ans;
    }
};