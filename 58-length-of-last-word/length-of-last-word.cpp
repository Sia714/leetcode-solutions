class Solution {
public:
    int lengthOfLastWord(string s) {
        int res=0;
        int i=s.length()-1;
        if(s.length() < 0) {
            return 0;
        }
        if(s.length() == 1){
            if(s[0] == ' ') {
                return 0;
            }
            else {
                return 1;
            }
        }
        while(i >= 0 && s[i]==' '){
            i--;
        }
        while(i >= 0 && s[i]!=' '){
            res++;
            i--;
        }
        
        return res;
    }
};