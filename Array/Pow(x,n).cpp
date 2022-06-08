BRUTE FORCE 
O(n)

class Solution {
public:
    double myPow(double x, int n) {
        int i;
        double pow=1.0;
        if(n<0)
        {
            x=1/x;
            n=-n;
        }
        
        for(i=n;i>0;i--)
        {
            pow=pow*x;
        }
        return pow;
    }
};

OPTIMIZED
O(logn)
  class Solution {
public:
    double myPow(double x, int n) {
        
        double pow=1.0;
        long long nn=n;
        if(nn<0)
        {
            nn=-nn;
        }
        while(nn)
        {
            if(nn%2==1)//odd n
            {
                pow=pow*x;
                nn=nn-1;
            }
            else
            {
                x=x*x;
                nn=nn/2;
            } 
        }
        if(n<0)
        {
            pow=1.0/pow;
        }
        return pow;
    }
};
