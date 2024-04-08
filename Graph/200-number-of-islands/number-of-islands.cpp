class Solution {
public:
    void traversal(vector<vector<char>>& grid, vector<vector<int>>& visited, int row, int col){
        int rows=grid.size();
        int cols=grid[0].size();
        int curr_i=row;
        int curr_j=col;
        visited[row][col]=1;
        int dx[4]={-1, 0, 1,  0};
        int dy[4]={ 0, -1, 0, 1 };
        for(int i=0;i<4;i++){
            int next_i = curr_i+dx[i];
            int next_j = curr_j+dy[i];
            if(next_i>=0 && next_i<rows && next_j>=0 && next_j<cols && !visited[next_i][next_j] && grid[next_i][next_j]=='1'){
                visited[next_i][next_j]=1;
                traversal(grid,visited,next_i,next_j);
            }
        }
    }
    
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int rows=grid.size();
        int cols=grid[0].size();
        vector<vector<int>> visited(rows,vector<int>(cols,0));
        int count=0;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if( !visited[i][j] && grid[i][j]=='1'){
                    traversal(grid,visited,i,j);
                    ++count;
                }
            }
        }
        return count;
    }
};
