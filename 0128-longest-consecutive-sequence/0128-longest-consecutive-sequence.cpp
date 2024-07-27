class Solution {
public:
    int longestConsecutive(vector<int>& vec) {
        int n=vec.size();
        sort(vec.begin(),vec.end());

        int count=1, last_smallest=INT_MIN,largest=0;

        for(int i=0;i<n;i++)
        {
            if(vec[i]-1==last_smallest)
            {
                count++;
                last_smallest=vec[i];
            }
            else if(vec[i]!=last_smallest)
            {
                count=1;
                last_smallest=vec[i];
            }
            largest=max(largest,count);
        }

        return largest;
    }
};