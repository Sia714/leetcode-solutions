class Solution {
public:
    int maximumProfit(int i,int buy,vector<int>& values,int n,vector<vector<int>>&dp){
        if(i==n){
            return 0;
        }
        if(dp[i][buy]!=-1){
            return dp[i][buy];
        }
        int profit=0;
        if(buy==1){
            profit=max(-values[i]+maximumProfit(i+1,0,values,n,dp),0+maximumProfit(i+1,1,values,n,dp));
        }
        else{
            profit=max(+values[i]+maximumProfit(i+1,1,values,n,dp),0+maximumProfit(i+1,0,values,n,dp));
        }
        return dp[i][buy]=profit;
    }
   
    int maxProfit(vector<int>& prices) {
        int i=0;
        int buy=1;
        int n=prices.size();
        vector<vector<int>>dp(n,vector<int>(2,-1));
        return maximumProfit(i,buy,prices,n,dp);
    }
};
