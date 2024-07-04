class Solution {
public:
    int lps(string &s, int m,int n, vector<vector<int>> &dp){
        if (m < 0 || n >= s.size() || m < n) {
            return 0;
        }
        if(m==n){
            return 1;
        }
        if(m<n){
            return 0;
        }
        if(dp[m][n]!=-1){return dp[m][n];}
        if(s[m]==s[n]){
            dp[m][n]= 2+lps(s,m-1,n+1,dp);
        }
        else{
            int l=lps(s,m-1,n,dp);
            int r=lps(s,m,n+1,dp);
            dp[m][n]=max(l,r);
        }
        return dp[m][n];
    }
    int minInsertions(string s) {
        int m=s.size();
        vector<vector<int>> dp(m,vector<int>(m,-1));
        int n= lps(s,m-1,0,dp);
        return m-n;
    }
};