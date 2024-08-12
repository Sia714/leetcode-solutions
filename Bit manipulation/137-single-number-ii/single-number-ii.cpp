class Solution {
public:
    int singleNumber(vector<int>& nums) {
        long long int ans=0;
        for(int j=0;j<=31;j++){
            int count=0;
            for(int i:nums){
                if((1<<j)&i){count++;}
            }
            if(count%3){
                ans+=pow(2,j);
            }
        }
        return ans;
    }
};
