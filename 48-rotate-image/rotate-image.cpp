class Solution {
public:
void transpose(vector<vector<int>>& matrix, int n) {
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        } 
    }
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();

        transpose(matrix,n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n/2;j++){
                swap(matrix[i][j], matrix[i][n-j-1]);
            }
        }
        
    }
};