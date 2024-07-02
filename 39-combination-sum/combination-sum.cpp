class Solution {
public:
    void display(vector<int> arr){
        for(int i:arr){
            cout<<arr[i]<<' ';
        }
        cout<<endl;
    }
    void helper (vector<int>& candidates, vector<vector<int>> &ans,vector<int> &res, int i,int target){
        if(i==candidates.size()){
            if(target==0){
                ans.push_back(res);
                return;
            }
            return;            
        }
        if(target<0){
            return;
        }
        
       
        if(candidates[i]<=target){
            res.push_back(candidates[i]);
            target=target-candidates[i];
            helper(candidates,ans,res,i,target);
            res.pop_back();
            target=target+candidates[i];
        }
        
        helper(candidates,ans,res,i+1,target);

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> res;
        helper(candidates,ans,res,0,target);
        return ans;
    }
};