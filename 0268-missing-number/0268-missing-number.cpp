class Solution {
public:
    int missingNumber(vector<int>& vec) {
        int xor1=0;
  for(int i=0;i<=vec.size();i++)
  {
    xor1=xor1^i;
  }
  int xor2=0;

  for(auto it:vec)
  {
    xor2=xor2^it;
  }
  return(xor1^xor2);
    }
};