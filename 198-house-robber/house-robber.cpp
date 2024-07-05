class Solution {
public:

    int helper(vector<int> &nums,int i, int n,vector<int>& dp){
        if(i>=n){
            return 0;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        int sum1=helper(nums,i+1,n,dp);
        int sum2=nums[i]+helper(nums,i+2,n,dp);
        dp[i]=max(sum1,sum2);
        return dp[i];
    }

    int rob(vector<int>& nums) {
        vector<int> dp(nums.size()+1,-1);
        return helper(nums,0,nums.size(),dp);
        
    }
};