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
        // vector<int> dp(nums.size()+1,-1);
        // return helper(nums,0,dp);
        int n=nums.size();
        vector<bool> dp(n,false);
        dp[0]=true;
        for(int i=0;i<n;i++){
            if(dp[i]){
                int fj=min(n-1,i+nums[i]);
                for(int j=0;j<=fj;j++){
                    dp[j]=true;
                }
            }
        }
        return dp[n-1];
        
    }
};
