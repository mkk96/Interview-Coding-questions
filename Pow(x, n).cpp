class Solution {
public:
    double p(double x,int n)
    {
        if(n==0)
        {
            return 1;
        }
        if(n==1||n==-1)
        {
            return x;
        }
        double temp=p(x,n/2);
        if(abs(n)%2==1)
        {
            return temp*x*temp;
        }
        else
        {
            return temp*temp;
        }
    }
    double myPow(double x, int n) 
    {
        if(n<0)
        {
            return 1/p(x,n);
        }
        return p(x,n);
    }
};