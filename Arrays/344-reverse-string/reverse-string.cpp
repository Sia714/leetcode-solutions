class Solution {
public:
    void reverseString(vector<char>& s) {
        int i=s.size()-1;
        int j=0;
        while(i>j){
            char temp=s[i];
            j=s.size()-1-i;
            s[i]=s[j];
            s[j]=temp;
            i--;
        }
        
    }
};
