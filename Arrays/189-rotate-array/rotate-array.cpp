class Solution {
public:
    void reverse(vector<int>& nums, int i, int j){
        while(i<j){
            swap(nums[i],nums[j]);
            i++;j--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int l=nums.size();
        k=k%l;
        reverse(nums,0,l-1);
        reverse(nums,0,k-1);
        reverse(nums,k,l-1);
    }
};
