class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> arr(n+1,0);
        for(int k=0;k<=n;k++){
            int count=0;
            for(int i=0;i<=31;i++){
                count+=(((1<<i)&k)>0?1:0);
            }
            arr[k]=count;
        }
        return arr;
    }
};
