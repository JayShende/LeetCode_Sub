class Solution {
public:
    int countSeniors(vector<string>& details) {
        int ans=0;

        for(int i=0;i<details.size();i++)
        {
            int age=0;
            string str=details[i];

            int a=str[11]-'0';
            int b=str[12]-'0';
            age=a*10+b;

            if(age>60)
            {
                ans++;
            }
        }
        return ans;
    }
};