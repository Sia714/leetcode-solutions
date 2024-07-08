class Solution {
public:
    void bfs(int start, vector<vector<int>>& adj, vector<int> &visited) {
        queue<int> q;
        q.push(start);
        visited[start] = 1;
        while (!q.empty()) {
            int curr = q.front();
            q.pop();
            for (int nbr = 0; nbr < adj[curr].size(); nbr++) {
                if (adj[curr][nbr] == 1 && !visited[nbr]) {
                    q.push(nbr);
                    visited[nbr] = 1;
                }
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int count = 0;
        int n = isConnected.size();
        vector<int> visited(n, 0);
        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                bfs(i, isConnected, visited);
                count++;
            }
        }
        return count;
    }
};