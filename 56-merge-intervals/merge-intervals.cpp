class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
        int n=intervals.size();
        ans.push_back(intervals[0]);
        if(n<=1){return intervals;}
        for(int i=0;i<n;i++){
             if(ans.back()[1] >= intervals[i][0]) {
                ans.back()[1] = max(intervals[i][1], ans.back()[1]);
            } else {
                ans.push_back(intervals[i]);
            }
        }
        return ans;
    }
};