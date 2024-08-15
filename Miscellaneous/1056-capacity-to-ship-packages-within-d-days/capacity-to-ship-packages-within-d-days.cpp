class Solution {
public:
    bool help(vector<int>& weights, int days, int n){
        int sum=0, k=1;
        for(int i:weights){
            if(sum+i>n){
                sum=0;
                k++;
            }
            sum+=i;
        }
        return (k<=days);
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(), weights.end()), high=0;
        for(int i: weights){
            high+=i;
        }
        while(low<high){
            int mid=(low+high)/2;
            if(help(weights,days,mid)){
                high=mid;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};
