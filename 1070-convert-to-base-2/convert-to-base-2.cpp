class Solution {
public:
    
    string baseNeg2(int n) {
        string s="";
        while(n!=0){
            if((n%2)==0){
                s="0"+s;
            }
            else{
                s="1"+s;
                n--;
            }
            n/=-2;
        }
        if(s==""){
            s='0';
        }
        return s;
    }
};