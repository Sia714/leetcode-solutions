class Solution {
public:
    int ds(string &s1, string &s2, int m, int n,vector<vector<int>> &dp){
        if(n==0){
            return 1;
        }
        if(m==0){
            return 0;
        }
        if(dp[m][n]!=-1){return dp[m][n];}
        if(s1[m-1]==s2[n-1]){
            dp[m][n]=ds(s1,s2,m-1,n-1,dp)+ds(s1,s2,m-1,n,dp);
        }
        else{
           dp[m][n]=ds(s1,s2,m-1,n,dp);            
        }
        return dp[m][n];
    }
    int numDistinct(string s, string t) {
        int m=s.size();
        int n=t.size();
        vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
        return ds(s,t,m,n,dp);
    }
};
