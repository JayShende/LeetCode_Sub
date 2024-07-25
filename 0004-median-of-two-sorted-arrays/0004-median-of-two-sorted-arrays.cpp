class Solution {
public:
   double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
	vector<int> vec;

	for (auto it : nums1)
	{
		vec.push_back(it);
	}
	for (auto it : nums2)
	{
		vec.push_back(it);
	}
	;
	sort(vec.begin(), vec.end());
	for (auto it : vec)
	{
		cout << it << " ";
	}
	cout << endl;
	     int s = vec.size();
	     cout<<s<<endl;
	double ans = 0;
	if (s % 2 == 0)
	{
		int n1 = vec[(s / 2)-1];
		int n2 = vec[s / 2 ];
		cout<<n1+n2<<endl;
		ans = (n1 + n2) / 2.0;
        return ans;
	}

	ans = vec[s / 2] ;
	return ans;
   }
};