class Solution {
public:
    int helper(vector<int> &dp,int n){
        if(n==0){
            return 1;
        }
        if(n<=0){
            return 0;
        }
        if (dp[n] != -1) {
            return dp[n];
        }
        dp[n]=helper(dp,n-1)+helper(dp,n-2);
        return dp[n];
    }
    int climbStairs(int n) {
        vector<int> dp(n+2,0);
        dp[0]=0;dp[1]=1;
        for(int i=2;i<=n+1;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n+1];

    }
};