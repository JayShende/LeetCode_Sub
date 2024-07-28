class Solution {
public:
    int minimumOperations(vector<int>& nums) {
     // logic is that if u do +1 or -1 to any non Prime Num u will Get That Sum Div by 3
     // So For Each Num if Not Divisible By 3 U will Req only one Step to Make it Div by 3

     int ans=0;
     for(auto it:nums)
     {
        if(it%3!=0)
        {
            ans++;
        }
     }   
     return ans;
    }
};