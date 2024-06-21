class Solution {
public:
    vector<int> findClosestElements(vector<int>& nums, int k, int x) {
        priority_queue<pair<int, int>, vector<pair<int, int>>> pq;
        for(int i=0;i<nums.size();i++){        
            int diff=abs(nums[i]-x);
            pq.push({diff,nums[i]});
            if(pq.size()>k){
                pq.pop();
            }
        }
        vector<int> ans;
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};