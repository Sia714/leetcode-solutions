class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res="";
        int n=strs.size();
        sort(strs.begin(),strs.end());
        string first=strs[0], last= strs[n-1];
        cout<<endl;
        for(int i=0;i<min(first.size(),last.size());i++){
            if(first[i]!=last[i]){
                return res;
            }
            res+=first[i];
        }
 
        return res;

        
    }
};