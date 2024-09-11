class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int res=arr[0];
        int maxx=arr[0];
        for(int i=1;i<arr.size();i++){
            maxx=max(maxx+arr[i],arr[i]);
            res=max(maxx,res);
        }
        return res;
    }
};