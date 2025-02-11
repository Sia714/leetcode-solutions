class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& arr) {
        int n=arr.size();
        int m= arr[0].size();
        vector<int> res(n,0);
        for(int i=0; i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[i][j]==1){
                    res[i]+=1;
                }
            }
        }
       
        int max=res[0];
        int r=0;
        for(int i=1; i<n;i++){
            if(res[i]>max){
                max=res[i];
                r=i;
            }
        }
        return {r,max};
        }
};
