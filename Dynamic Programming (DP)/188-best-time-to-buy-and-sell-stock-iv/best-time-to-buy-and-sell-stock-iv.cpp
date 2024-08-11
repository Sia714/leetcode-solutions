class Solution {
public:
 
    int maximumProfit(int i,int buy,int k,vector<int> &values,int n,vector<vector<vector<int>>>&dp){
        if(i==n || k==0){
            return 0;
        }
        if(dp[i][buy][k]!=-1){
            return dp[i][buy][k];
        }
        long profit=0;
        if(buy==1){
            profit=max(-values[i]+maximumProfit(i+1,0,k,values,n,dp),0+maximumProfit(i+1,1,k,values,n,dp));
        }
        else{
            profit=max(+values[i]+maximumProfit(i+1,1,k-1,values,n,dp),0+maximumProfit(i+1,0,k,values,n,dp));
        }
        return dp[i][buy][k]=profit;
    }

        
    int maxProfit(int k,vector<int>& prices)
    {
        // Write your code here.
        int i = 0;
        int buy = 1;
        int n = prices.size();
        vector<vector<vector<int>>> dp(n, vector<vector<int>>(2, vector<int>(k + 1, -1)));
        return maximumProfit(i, buy, k, prices, n, dp);
    }
  
};
