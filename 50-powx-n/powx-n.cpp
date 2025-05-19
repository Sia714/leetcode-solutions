class Solution {
public:
    double myPow(double x, int n) {
        // return pow(x,n);
        double ans = 1.0;
        long long nn = n;
        if (nn < 0) nn = -1 * nn;
        while(nn){
            if(nn%2){
                nn=nn-1;
                ans*=x;
            }
            else{
                x=x*x;
                nn/=2;
            }
        }
        if (n < 0) ans = (double)(1.0) / (double)(ans);
        return ans;
    }
};