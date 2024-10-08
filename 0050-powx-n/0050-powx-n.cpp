class Solution {
private:
    long double fun(double x, long long n)
    {
        if(n==1) return x;
        if(n==0) return 1;
        if(n%2==0)
        {
            // even power
            return fun(x*x,n/2);
        }
        return x*fun(x,n-1);
    }
public:
    double myPow(double x, int n) {
        long long a=n;
        if(n<0)
        {
            x=1/x;
            a=(long long)-1*n;
        }
        return fun(x,a);
    }
};