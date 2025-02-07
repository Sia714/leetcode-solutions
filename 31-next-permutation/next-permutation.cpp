class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int k=-1;
        int n=nums.size();
        int i=n-2,j;
        for(;i>=0;i--){
            if(nums[i]<nums[i+1]){
                k=i;
                break;
            }
        }
        if(i >= 0) {
            for(j = n - 1; j > i; j--) {
                if(nums[j] > nums[i]) break;
            }
            swap(nums[i], nums[j]);
        }
        
        reverse(nums.begin() + i + 1, nums.end());

    }
};