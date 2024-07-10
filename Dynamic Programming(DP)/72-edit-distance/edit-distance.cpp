class Solution {
public:
    int helper(string word1, string word2, int i, int j,vector<vector<int>> &dp){
        if(i<0){
            return j+1;
        }
        if(j<0){
            return i+1;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        
        if(word1[i]==word2[j]){
            return dp[i][j]=helper(word1,word2,i-1,j-1,dp);
        }
        else{
            int inser=1+helper(word1,word2,i,j-1,dp);
            int del=1+helper(word1,word2,i-1,j,dp);
            int rep=1+helper(word1,word2,i-1,j-1,dp);
            return dp[i][j]=min(del,min(rep,inser));
        }
    }
    int minDistance(string word1, string word2) {
        int i=word1.size()-1;
        int j=word2.size()-1;
        vector<vector<int>>dp(word1.size(),vector<int>(word2.size(),-1));
        return helper(word1,word2,i,j,dp);
    }
};
