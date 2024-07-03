class Solution {
public:
    int helper(vector<vector<int>> & triangle, int i, int j,int m,vector<vector<int>> & dp){
        if(i>=m){
            return 1e9;
        }
        if(i==m-1){
            return triangle[i][j];
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int sum1=triangle[i][j]+helper(triangle,i+1,j,m,dp);
        int sum2=triangle[i][j]+helper(triangle,i+1,j+1,m,dp);
        return dp[i][j]=min(sum1,sum2);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int m=triangle.size();
        vector<vector<int>> dp(m,vector<int>(m,-1));
        int ans=helper(triangle,0,0,m,dp);
        return ans;
    }
};