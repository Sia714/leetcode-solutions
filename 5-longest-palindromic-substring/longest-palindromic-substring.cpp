class Solution {
public:
    string expand(string &s, int i, int j){
        while(i>=0 && j<s.length() && s[i]==s[j]){
            i--;
            j++;
        }
        return s.substr(i+1,j-i-1);
    }

    string longestPalindrome(string s) {
        if(s.length()<=1){
            return s;
        }
        string ans="";
        for(int i=0;i<s.length();i++){
            string temp1=expand(s,i,i);
            string temp2=expand(s,i,i+1);
            string temp="";
            if(temp1.length()>temp2.length()){
                temp=temp1;
            }else{
                temp=temp2;
            }
            if(temp.length()>ans.length()){
                ans=temp;
            }
        }
        return ans;
    }
};