class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int s=0;
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            s=0;
            for(int j=i+1;j<nums.size();j++){
                s=nums[i]+nums[j];
                if(s==target){
                    res.push_back(i);
                    res.push_back(j);
                    return res;
                }
            }
        }
        res.push_back(-1);
        return res;
    }
};