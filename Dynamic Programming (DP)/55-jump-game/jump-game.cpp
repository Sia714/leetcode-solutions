class Solution {
public:
    bool helper(vector<int> &nums,int i,vector<int>& dp){
        if(i==nums.size()-1){
            return true;
        }
        
        if(dp[i]!=-1){
            return dp[i];
        }
        int fj = min(i + nums[i], (int)nums.size() - 1);
        for(int k=i+1;k<=fj;k++){
            if(helper(nums,k,dp)){
                dp[i]=1;
                return true;
            }
        }
        dp[i]=0;
        return false;
        
    }
    bool canJump(vector<int>& nums){
        vector<int> dp(nums.size()+1,-1);
        return helper(nums,0,dp);
        
    }
};
