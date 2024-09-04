class Solution {
public:
    void rotate(vector<int>& vec, int k) {
        k=k%vec.size();
        int a=vec.size()-k;
        reverse(vec.begin(),vec.begin()+a);
        reverse(vec.begin()+a,vec.end());
        reverse(vec.begin(),vec.end());

    }
};