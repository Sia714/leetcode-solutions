class Solution {
public:

    bool canEatAll(const vector<int>& piles, int h, int k) {
        int hours = 0;
        for (int i : piles) {
            hours += (i + k - 1) / k;
        }
        return hours <= h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int m=0;
        for(int i:piles){
            if(i>m){
                m=i;
            }
        }
        int low=1, high=m;
        while(low<high){
            int mid=(high+low)/2;
            if(canEatAll(piles,h,mid)){
                high=mid;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};