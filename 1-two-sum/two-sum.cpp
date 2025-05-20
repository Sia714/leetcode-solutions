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
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         vector <pair<int,int>> num;
//         int n=nums.size();
//         for(int i=0;i<n;i++){
//             num.push_back({nums[i],i});
//         }

//         sort(num.begin(),num.end());
//         for(int i=0;i<n;i++){
//             int tar=target-num[i].first,low=i+1, high=n-1;
//             while(low<=high){
//                 int mid=low+(high-low)/2;
//                 if(num[mid].first==tar){
//                     return {num[i].second,num[mid].second};
//                 }else if (num[mid].first>tar){
//                     high=mid-1;

//                 }
//                 else{
//                     low=mid+1;

//                 }
//             }
//         }
//         return {};
//     }
// };
