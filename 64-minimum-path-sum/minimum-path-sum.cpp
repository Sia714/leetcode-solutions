class Solution {
public:
    int helper(vector<vector<int>> & grid, int i, int j,int m, int n,vector<vector<int>>&dp){
        if(i>=m || j>=n){
            return 1e9;
        }
        if(i==m-1 && j==n-1){
            return grid[i][j];
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int sum1=grid[i][j]+helper(grid,i+1,j,m,n,dp);
        int sum2=grid[i][j]+helper(grid,i,j+1,m,n,dp);
        return dp[i][j]=min(sum1,sum2);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>> dp(m,vector<int>(n,-1));
        int ans=helper(grid,0,0,m,n,dp);
        return ans;
    }
};