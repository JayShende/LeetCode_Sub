class Solution {
public:
    void nextPermutation(vector<int>& nums) {
      next_permutation(nums.begin(),nums.end());
      return;

      // this Solution Uses an Inbuilt STL Lib next_permutation();
    }
};