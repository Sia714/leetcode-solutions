class Solution {
public:
    string reverseWords(string s) {
        vector<string> str;
        string res = "";
        int n = s.length();
        
        for (int i = 0; i < n; i++) {
            if (s[i] != ' ') {
                res += s[i]; 
            } else if (!res.empty()) {
                str.push_back(res); 
                res = ""; 
            }
        }
        
        if (!res.empty()) {
            str.push_back(res);
        }

        string ans = "";
        for (int i = str.size() - 1; i >= 0; i--) {
            ans += str[i];
            if (i != 0) ans += " "; 
        }
        return ans;
    }
};
