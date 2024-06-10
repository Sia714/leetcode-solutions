class Solution {
public:
    int sum(int k, vector<int>& nums) {
        int sum = 0;
        for (int i : nums) {
            sum += (i + k - 1) / k;
        }
        return sum;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int n = nums.size();
        int res=-1;
        int high = *max_element(nums.begin(), nums.end());;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (sum(mid, nums) <=threshold) {
                res=mid;
                high=mid-1;
            } else {
                low=mid+1;
            }
        }
        return res;
    }
};
