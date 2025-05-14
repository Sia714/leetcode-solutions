class Solution {
public:
 void display(vector<int> &arr){
        cout<<"temp\n";
        for(int i:arr){
            cout<<i<<' ';
        }
         cout<<endl;
    }
     void display(vector<vector<int>> &arr){
        cout<<"dp\n";
        for(auto te:arr){
            for(int i:te){
            cout<<i<<' ';}
        }
         cout<<endl;
    }
    vector<vector<int>> generate(int n) {
        vector<vector<int>> dp;
         if (n == 0) return dp;
       dp.push_back({1});
        for(int i=1;i<n;i++){
            vector<int> temp;
            temp.push_back(1);
            for(int j=1;j<i;j++){
                temp.push_back(dp[i-1][j-1]+dp[i-1][j]);
            }
            temp.push_back(1);
            display(temp);
            display(dp);
            dp.push_back(temp);
        }
        return dp;
    }
};