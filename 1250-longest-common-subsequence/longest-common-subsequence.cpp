class Solution {
public:
    int longestsubstring(string &s1, string &s2, int m, int n,vector<vector<int>> &dp){
    
        if(m==0 or n==0){
            return 0;
        }
        if(dp[m][n]!=-1){return dp[m][n];}
        if(s1[m-1]==s2[n-1]){
            return 1+longestsubstring(s1,s2,m-1,n-1,dp);
        }
        else{
            int l=longestsubstring(s1,s2,m-1,n,dp);
            int r=longestsubstring(s1,s2,m,n-1,dp);
            dp[m][n]=max(l,r);
        }
        return dp[m][n];
    }
    int longestCommonSubsequence(string text1, string text2) {
        int m=text1.size();
        int n=text2.size();
        vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
        return longestsubstring(text1,text2,m,n,dp);
    }
};