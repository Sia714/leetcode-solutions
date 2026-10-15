class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0)count++;
        }
         for(int i=n-1;i>=0;i--){
            if(nums[i]==0)nums.erase(nums.begin()+i);
        }
        for(int i=0;i<count;i++){
            nums.push_back(0);
        }
    }
};