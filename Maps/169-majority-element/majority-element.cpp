class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> mp;
        
        for(int i: nums){
            if(mp.find(i)!=mp.end()){
                mp[i]=mp[i]+1;
            }
            else{
                mp[i]=1;
            }
    
        }
        
        for (auto it = mp.begin(); it != mp.end(); ++it){
            if (it->second > n/2){return it->first;}
        }
        
        return -1;
    }
};
