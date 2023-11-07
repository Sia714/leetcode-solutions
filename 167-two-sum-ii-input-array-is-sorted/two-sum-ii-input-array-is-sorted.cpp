class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        vector<int> res;
        int l=0;
        int h=num.size()-1;
        while(l<h){
            if(num[l]+num[h]>target){
                h--;
            }
            else if(num[l]+num[h]<target){
                l++;
            }
            else{
                res.push_back(l+1);
                res.push_back(h+1);
                return res;
            }
        }
        res.push_back(-1);
        res.push_back(-1);
        return res;
    }
};