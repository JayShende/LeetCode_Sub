class Solution {
private:
    int fun(vector<int> vec)
    {
        int ans=0;
        for(auto it:vec)
        {
            if(it==9)
            {
                ans++;
            }
        }
        return (ans==vec.size());
    }
public:
    vector<int> plusOne(vector<int>& digits) {
        int c=1;
        int n=digits.size();

        // Count Num of 9 if equal to n then Make a New vector
        if(fun(digits))
        {
            vector<int> ans;
            ans.push_back(1);

            for(int i=0;i<digits.size();i++)
            {
                ans.push_back(0);
            }

            return ans;
        }
       else if(c)
       {    int i;
            for(i=n-1;i>=0;i--)
            {
                if(digits[i]==9)
                {
                    digits[i]=0;
                    c=1;
                }
                else{
                    break;
                }
            }
            digits[i]=digits[i]+c;
            return digits;
       }

        
        digits[n-1]=digits[n]+1;

        return digits;
    }
};