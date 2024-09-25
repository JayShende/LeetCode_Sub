class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        int n=n1+n2;

        int ind1=(n/2);
        int ind2=(n/2)+1;
        int ele,ele1,ele2;

        int i=0,j=0;
        int count=0;
        while(i<n1 && j<n2)
        {
            if(nums1[i]<=nums2[j])
            {
                count++;
                ele=nums1[i];
                i++;
            }
            else{
                ele=nums2[j];
                j++;
                count++;
            }

            if(count==ind1)
            {
                ele1=ele;
            }
            if(count==ind2)
            {
                ele2=ele;
            }
        }

        while(i<n1)
        {
            ele=nums1[i];
            count++;
            i++;
            if(count==ind1)
            {
                ele1=ele;
            }
            if(count==ind2)
            {
                ele2=ele;
            }
        }

        while(j<n2)
        {
            ele=nums2[j];
            count++;
            j++;
            if(count==ind1)
            {
                ele1=ele;
            }
            if(count==ind2)
            {
                ele2=ele;
            }
        }
        double ans=0;
        cout<<ele1<<" "<<ele2<<endl;
        if(n%2==0)
        {
            ans=(double)(ele1+ele2)/2;
        }
        else{
            ans=ele2;
        }

        return ans;
    }
};