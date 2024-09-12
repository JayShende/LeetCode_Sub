class Solution {
public:
bool checkAlmostEquivalent(string word1, string word2)
{
    map<char, int> mpp1;
    

    for(int i=0;i<word1.size();i++)
    {
        mpp1[word1[i]]++;
    }

    for(int i=0;i<word2.size();i++)
    {
        mpp1[word2[i]]--;
    }

    for(auto it:mpp1)
    {
        if(abs(it.second)>3)
        {
            return false;
        }
    }
    return(true);

}
};