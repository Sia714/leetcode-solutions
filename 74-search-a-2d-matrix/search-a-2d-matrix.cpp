class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target){
        int n=matrix.size();
        int m=matrix[0].size();
        int l=0,h=(n*m)-1;
        while(l<=h){
            int mid=(l+h)/2;
            int me = matrix[mid / m][mid % m];
            if(me==target){
                return true;
            }
            else if (me>target){
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return false;
    }
};