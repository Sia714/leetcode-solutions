class Solution {
public:
    int hammingWeight(int n) {
        int count=0;
        for(int i=0;i<=31;i++){
            count+=(((1<<i)&n)>0?1:0);
        }
        return count;
    }
};