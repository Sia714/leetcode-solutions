class Solution {
public:

    // int helper(vector<int> &nums,int i, int n,vector<int>& dp){
    //     if(i>=n){
    //         return 0;
    //     }
    //     if(dp[i]!=-1){
    //         return dp[i];
    //     }
    //     int sum1=helper(nums,i+1,n,dp);
    //     int sum2=nums[i]+helper(nums,i+2,n,dp);
    //     dp[i]=max(sum1,sum2);
    //     return dp[i];
    // }

    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n+2,0);
        if(nums.size()==1){return nums[0];}
        if(nums.size()==2){return max(nums[0],nums[1]);}

        dp[0]=nums[0];
        dp[1]=max(nums[0], nums[1]);
        for(int i=2; i<n;i++){
            dp[i]=max(dp[i-1],nums[i]+dp[i-2]);
        }
        return dp[n-1];
        
    }
};