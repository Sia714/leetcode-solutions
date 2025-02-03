class Solution {
public:
    bool ispalindrome(string s, int i, int j){
         while(i<j && s[i]==s[j]){
            i++;j--;
        }
        return (i>=j); 
    }
    
    bool validPalindrome(string s) {
        // int i=0,j=s.length();
        // int c=0;
        // while(i<j){
        //     if (s[i] !=s[j]){
        //         cout<<i<<':'<<j<<endl;
        //         if(s[i+1]==s[j] && c<1){
        //             i++;
        //             c++;
        //         }
        //         else if(s[j-1]==s[i] && c<1){
        //             j--;
        //             c++;
        //         }
        //         else{
        //             return false;
        //         }
        //     }
        //     i++; j--; 
        // }
        // return true;

        int i=0,j=s.size()-1;
        while(i<j && s[i]==s[j]){
            i++;j--;
        }
        return (i>=j || ispalindrome(s,i+1,j) || ispalindrome(s,i,j-1));
        
    }
};