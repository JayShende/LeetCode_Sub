class Solution {
public:
  
    int subtractProductAndSum(int n) {
        int a=n;
        int pro=1,sum=0;
        while(a)
        {
            int d=a%10;

            pro=pro*d;
            sum=sum+d;

            a=a/10;
        }

        return(pro-sum);
    }
};