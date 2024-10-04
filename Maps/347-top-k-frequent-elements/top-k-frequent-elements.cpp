class Compare {
public:
    bool operator() (pair<int, int>& p1, pair<int, int>& p2) {
        return p1.first > p2.first; // This will create a min-heap based on the first element of the pair
    }
};
class Solution {
public:
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, Compare> pq;
        unordered_map<int,int> mp(0);
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto i:mp){
            int ele=i.first;
            int freq=i.second;
            pq.push({freq,ele});
            if(pq.size()>k){
                pq.pop();
            }
        }
        vector<int> ans;
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};

