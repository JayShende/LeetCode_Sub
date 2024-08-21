class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()) return false;
        if(s==goal) return true;

        bool ans=false;

        for(int i=1;i<s.size();i++)
        {
            reverse(s.begin(),s.begin()+1);
            reverse(s.begin()+1,s.end());
            reverse(s.begin(),s.end());

            if(s==goal)
            {
                return true;
            }
        }

        return ans;
    }
};