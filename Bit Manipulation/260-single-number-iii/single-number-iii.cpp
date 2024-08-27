class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int res=0;
        for(int i:nums){
            res^=i;
        }
        int y=0;
        while(((res>>y) & 1)!=1){
            y++;
        }
        vector<int> result(2,0);
        for(int i:nums){
            if((i>>y)&1){
                result[1]^=i;
            }
            else{
                result[0]^=i;
            }
        }
        return result;
    }
};
