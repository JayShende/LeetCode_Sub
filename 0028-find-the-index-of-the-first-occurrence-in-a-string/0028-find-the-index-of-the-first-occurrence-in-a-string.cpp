class Solution {
private:
bool fun(string haystack, string needle,int a)
{   int j=0;
    for(int i=a;i<a+needle.size();i++)
    {
        if(haystack[i]!=needle[j])
        {
            return false;
        }
        j++;
    }
    return true;
}
public:
    int strStr(string haystack, string needle) {
        int ans=-1;
        int curr=INT_MAX;
        for(int i=0;i<haystack.size();i++)
        {   
            
            if(fun(haystack,needle,i))
            {
                curr=min(curr,i);
            }
        }
        if(curr==INT_MAX)
        {
            return ans;
        }
        return curr;
    }
};