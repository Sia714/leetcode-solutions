class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        // mp.insert({nums[i],0});
        vector<int> ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int temp=target-nums[i];
            if(mp.find(temp)!=mp.end()){
                return {mp[temp],i};
            }
            mp[nums[i]]=i;
        }
        return {};
    }
};