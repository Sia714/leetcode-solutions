class Solution {
public:
    int lcs(string &s1, string &s2, int m, int n,vector<vector<int>> &dp){
    
        if(m==0 or n==0){
            return 0;
        }
        if(dp[m][n]!=-1){return dp[m][n];}
        if(s1[m-1]==s2[n-1]){
            return 1+lcs(s1,s2,m-1,n-1,dp);
        }
        else{
            int l=lcs(s1,s2,m-1,n,dp);
            int r=lcs(s1,s2,m,n-1,dp);
            dp[m][n]=max(l,r);
        }
        return dp[m][n];
    }
    int minDistance(string word1, string word2) {
        int m=word1.size();
        int n=word2.size();
        vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
        int k=lcs(word1,word2,m,n,dp);
        return (abs(m-k)+abs(n-k));
    }
};