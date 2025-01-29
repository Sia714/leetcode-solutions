class Solution {
public:
    char check(char ch) {
        if (ch >= 'A' && ch <= 'Z') {
            return ch;
        } 
        else if (ch >= '0' && ch <= '9') {
            return ch;
        } 
        else if (ch >= 'a' && ch <= 'z') {
            return ch - 32; 
        } 
        return '\0'; 
    }

    bool isPalindrome(string s) {
        int i = 0, j = s.length() - 1;

        while (i < j) {
            while (i < j && check(s[i]) == '\0') i++;
            while (i < j && check(s[j]) == '\0') j--;

            if (check(s[i]) != check(s[j])) return false;

            i++; j--;
        }
        return true;
    }
};

