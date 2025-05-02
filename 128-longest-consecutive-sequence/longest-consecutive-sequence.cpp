class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0){
            return 0;
        }
        map<int,int> mp;
        for(int i=0;i<n;i++){
            if(mp.find(nums[i])==mp.end()){
                mp.insert({nums[i],0});
            }
            else{
                mp[nums[i]]++;
            }
        }
        int maxx=0;
        int curr=0;
            int p=mp.begin()->first;

        for(auto it:mp){
            int c=it.first;
            if(c==p+1){
                curr++;
                maxx=max(curr,maxx);
            }
            else{
                curr=0;
            }
            p=c;

        }
        return maxx+1;
    }
};