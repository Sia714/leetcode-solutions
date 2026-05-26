class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=1,j=1,n=nums.size();
        for(;j<n;j++){
            if(nums[i-1]!=nums[j]){
            nums[i]=nums[j];
            i++;
            }
        }
        return i;
    }
};