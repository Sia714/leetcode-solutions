class Solution {
public:
    bool helper(int n,vector<vector<int>>& graph, vector<int> &visited, vector<int> &color,int c){
        visited[n]=1;
        color[n]=c;
        for(int i:graph[n]){
            if(color[i]==-1){
                color[i]=1-c;
                if(!visited[i]){
                    if(!helper(i,graph,visited,color,1-c)){
                        return false;
                    }
                }
            }
            else if(color[i]==color[n]){
                return false;
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int m=graph.size();
        vector<int> visited(m,0);
        vector<int> color(m,-1);
        for (int i = 0; i < m; ++i) {
            if (!visited[i]) {
                if (!helper(i, graph, visited, color, 0)) {
                    return false;
                }
            }
        }
        return true;
    }
};