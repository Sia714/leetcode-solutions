class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        vector<int> ans(366,0);
        vector<bool> ch(366,false);
        for(int i:days){
            ch[i]=true;
        } 
        for(int i=1;i<=365;i++){
            if(!ch[i]){
                ans[i]=ans[i-1];
            }
            else{
            int t=min(ans[i-1]+costs[0],ans[max(0,i-7)]+costs[1]);
            ans[i]=min(t,ans[max(0,i-30)]+costs[2]);
            }
        }
        return ans[days.back()];
    }
};
