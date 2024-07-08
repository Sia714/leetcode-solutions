class Solution {
public:
    int traversal(vector<vector<int>>& grid, vector<vector<int>>& visited, int row, int col){
        int rows=grid.size();
        int cols=grid[0].size();
     
        visited[row][col]=1;
        int dx[4]={-1, 0, 1,  0};
        int dy[4]={ 0, -1, 0, 1 };
        int count=1;
        for(int i=0;i<4;i++){
            int next_i = row+dx[i];
            int next_j = col+dy[i];
            if(next_i>=0 && next_i<rows && next_j>=0 && next_j<cols && !visited[next_i][next_j] && grid[next_i][next_j]==1){
                count+=traversal(grid,visited,next_i,next_j);
            }
        }
        return count;
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int rows=grid.size();
        int cols=grid[0].size();
        vector<vector<int>> visited(rows,vector<int>(cols,0));
        int maxx=0;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if( !visited[i][j] && grid[i][j]==1){
                    maxx=max(maxx,traversal(grid,visited,i,j));
                }
            }
        }
        return maxx;
    }
};