class Solution {
public:
     bool isMatchHelper(string &s, string &p, int i, int j, vector<vector<int>> &memo) {
        if (j < 0) return i < 0;
        if (i < 0) return p[j] == '*' && isMatchHelper(s, p, i, j - 1, memo);

        if (memo[i][j] != -1) return memo[i][j];

        if (p[j] == s[i] || p[j] == '?') {
            return memo[i][j] = isMatchHelper(s, p, i - 1, j - 1, memo);
        }

        if (p[j] == '*') {
            return memo[i][j] = isMatchHelper(s, p, i - 1, j, memo) || isMatchHelper(s, p, i, j - 1, memo);
        }

        return memo[i][j] = false;
    }

    bool isMatch(string s, string p) {
        vector<vector<int>> memo(s.size(), vector<int>(p.size(), -1));
        return isMatchHelper(s, p, s.size() - 1, p.size() - 1, memo);
    }
};
