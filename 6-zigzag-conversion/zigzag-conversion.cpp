class Solution {
public:
    string convert(string s, int numRows) {
    int len=s.length();
    if(len<numRows || numRows==1){return s;}
    vector<int> helper;
    int i,j; i=j=0;
    for(int i=0; i<len;i++){
        while(j<numRows-1){
        helper.push_back(j);
        j++;i++;
        }
        helper.push_back(j);
        j--;
        while(j>0){
           helper.push_back(j);
            j--;
            i++;
        }
    }
    vector<string> zigzag(numRows);
    string ans="";
    for(int i=0; i<len;i++){
        zigzag[helper[i]]+=s[i];
    }
    for(string str:zigzag){
        ans+=str;
    }
    return ans;
    }
};