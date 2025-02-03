class Solution {
public:
    bool ispalindrome(string s, int i, int j){
         while(i<j && s[i]==s[j]){
            i++;j--;
        }
        return (i>=j); 
    }
    
    bool validPalindrome(string s) {


        int i=0,j=s.size()-1;
        while(i<j && s[i]==s[j]){
            i++;j--;
        }
        return (i>=j || ispalindrome(s,i+1,j) || ispalindrome(s,i,j-1));
        
    }
};