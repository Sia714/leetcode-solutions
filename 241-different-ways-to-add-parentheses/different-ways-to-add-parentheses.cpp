class Solution {
public:
    vector<int> op(string s, int l,int h){
        vector<int> result;
        bool isNumber = true;
        for (int i = l; i <= h; i++) {
            if (s[i] == '+' || s[i] == '-' || s[i] == '*') {
                isNumber = false;
                break;
            }
        }
        
        if (isNumber) {
            result.push_back(stoi(s.substr(l, h - l + 1))); // Convert substring to integer
            return result;
        }
        for(int i=l;i<=h;i++){
            char c=s[i];
            if(c=='*'||c=='-'|| c=='+'){
                vector<int> left= op(s,l,i-1);
                vector<int> right=op(s,i+1,h);
                for(int le:left){
                    for(int ri:right){
                        if(c=='*'){
                            result.push_back(le*ri);
                        }
                        else if(c=='-'){
                            result.push_back(le-ri);
                        }
                        else if(c=='+'){
                            result.push_back(le+ri);
                        }
                    }
                }
            }
        }
        return result;
    }
    vector<int> diffWaysToCompute(string expression) {
       return op(expression,0,expression.length()-1);
    }

};