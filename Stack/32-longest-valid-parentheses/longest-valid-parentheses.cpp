class Solution {
public:
    int longestValidParentheses(string arr) {
        int maxx=0;
        stack<int> s;
        s.push(-1);
        for(int i=0;i<arr.size();i++){
            if(arr[i]=='('){
                s.push(i);
            }
            else{
                if(s.size()==1){
                    s.top()=i;
                }
                else{           
                    s.pop();
                    maxx=max(maxx,i-s.top());
                }
            }
            
        }
        return maxx;
    }
};
