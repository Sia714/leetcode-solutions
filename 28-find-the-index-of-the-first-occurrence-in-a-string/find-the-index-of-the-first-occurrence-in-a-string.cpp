class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int i=0;i<haystack.size();i++){
            if(haystack[i]==needle[0]){
                int temp=i;
                for(int j=0;j<needle.size();j++){
                    if(haystack[temp]==needle[j]){temp++;}
                }
                if(temp==i+needle.size()){
                    return i;
                }
            }
        }
        return -1;
    }
};