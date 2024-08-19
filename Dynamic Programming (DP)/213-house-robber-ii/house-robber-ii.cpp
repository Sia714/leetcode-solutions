class Solution {
public:
    int helper(vector<int> &nums,int i, int n,vector<int> &dp){
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
        if (nums.size() == 1) {
            return nums[0];
        }
        if (nums.size() == 2) {
            return max(nums[0], nums[1]);
        }
        vector<int> dp1(nums.size()+1,-1);
        vector<int> dp2(nums.size()+1,-1);
        return max(helper(nums,0,nums.size()-1,dp1),helper(nums,1,nums.size(),dp2));
    }
};
