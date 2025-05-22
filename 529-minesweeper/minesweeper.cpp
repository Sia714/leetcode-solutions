class Solution {
    int dx[8]={0,1,0,-1,1,1,-1,-1};
    int dy[8]={1,0,-1,0,1,-1,1,-1};
public:
    void mark(vector<vector<char>>& board, int x, int y){
        int n=board.size(),m=board[0].size();
        int count=0;
        queue<pair<int,int>> q;
        for(int i=0;i<8;i++){
            int nx=x+dx[i];
            int ny=y+dy[i];
            if(nx>=0 && nx<n && ny>=0 && ny<m){
                if(board[nx][ny]=='M'){
                    count++;
                }
                else if(board[nx][ny]=='E'){
                    q.push({nx,ny});
                }
            }
        }
        if(!count){
            board[x][y]='B';
            while(!q.empty()){
                int nx=q.front().first;
                int ny=q.front().second;
                q.pop();
                mark(board,nx,ny);
            }
        }
        else{
            board[x][y]=count+'0';
        }
    }
    
    vector<vector<char>> updateBoard(vector<vector<char>>& board, vector<int>& click) {
        int x=click[0],y=click[1], n=board.size(),m=board[0].size();
        if(board[x][y]=='M'){
            board[x][y]='X';
            return board;
        }
        if(board[x][y]=='E'){
            mark(board,x,y);
        }
        return board;

    }
};