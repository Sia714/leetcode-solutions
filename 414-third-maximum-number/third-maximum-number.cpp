class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long max = LLONG_MIN; 
        long long sec = LLONG_MIN; 
        long long thi = LLONG_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>max){
                thi=sec;
                sec=max;
                max=nums[i];
            }
            else if(nums[i]>sec && nums[i] < max){
                thi=sec;
                sec=nums[i];
           }
           else if(nums[i]>thi && nums[i] < sec){thi=nums[i];}
        }
        return thi != LLONG_MIN ? thi : max;
        
    }
};