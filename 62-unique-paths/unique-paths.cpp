class Solution {
public:
    int helper(int m, int n, int i, int j, vector<vector<int>>& dp) {
        
        if (i >= m || j >= n) {
            return 0;
        }
        
        if (i == m - 1 && j == n - 1) {
            return 1;
        }
        
        if (dp[i][j] != -1) {
            return dp[i][j];
        }
        
        int rightPaths = helper(m, n, i, j + 1, dp);
        int downPaths = helper(m, n, i + 1, j, dp);
        
        dp[i][j] = rightPaths + downPaths;
        return dp[i][j];
    }
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m+1,vector<int>(n+1,-1)); 
        return helper(m, n, 0, 0, dp);
        
    }
};