class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0){
            return 1;
        }
        else if(n==1)
        {
            return 0;
        }
        int a=n;
        int mask=0;
        int i=0;
        
        while(a)
        {
            a=a>>1;
            mask=mask+pow(2,i);
            i++;
        }

        return(n^mask);
    }
};