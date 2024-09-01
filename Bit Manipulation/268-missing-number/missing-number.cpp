class Solution {
public:
    int missingNumber(vector<int>& arr) {
         int res=0;
        
        for(int i=0;i<arr.size();i++){
            res=res^arr[i];
        }
        for(int i=1;i<=arr.size();i++){
            res=res^i;
        }
        return res;
    }
};
