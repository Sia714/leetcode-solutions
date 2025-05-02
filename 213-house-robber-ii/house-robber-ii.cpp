class Solution {
public:
    int robLinear(vector<int>& nums, int start, int end) {
    int n = end - start + 1;
    vector<int> dp(n + 1, 0);

    dp[n] = 0; 
    dp[n - 1] = nums[end]; 
    for (int i = n - 2; i >= 0; --i) {
        int index = start + i;
        dp[i] = max(dp[i + 1], nums[index] + dp[i + 2]);
    }

    return dp[0];
}

int rob(vector<int>& nums) {
    int n = nums.size();
    if (n == 1) return nums[0];
    if (n == 2) return max(nums[0], nums[1]);

    return max(robLinear(nums, 0, n - 2), robLinear(nums, 1, n - 1));
}

};