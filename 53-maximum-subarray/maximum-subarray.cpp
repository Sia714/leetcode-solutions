class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res=nums[0];
        int curr=0;
        for(int n:nums){
            curr=max(curr,0);
            curr+=n;
            res=max(res,curr);
        }
        return res;
    }
};