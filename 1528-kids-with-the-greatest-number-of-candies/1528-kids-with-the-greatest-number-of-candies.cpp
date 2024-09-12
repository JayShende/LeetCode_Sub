class Solution {
public:
    int maxArr(vector<int> vec)
{
  int max=vec[0];
  for(auto it:vec)
  {
    if(it>max)
    {
      max=it;
    }
  }
  return max;
}
    vector<bool> kidsWithCandies(vector<int>& vec, int can) {
       int n=vec.size();


      vector<bool> ans;
      int max=maxArr(vec);
      for(auto it:vec)
      {
        if(it+can >=max)
        {
          ans.push_back(true);
        }
        else{
          ans.push_back(false);
        }
      } 

       return ans;
    }
};