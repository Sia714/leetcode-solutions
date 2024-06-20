class Solution {
public:
    vector<int> nsl(vector<int>& a,int n){
        vector<int> ans;
        stack<int> st;
        for(int i=0;i<n;i++){
            while(!st.empty() && a[st.top()]>=a[i]){
                st.pop();
            }
            if(st.empty()){
                ans.push_back(-1);
            }
            else{
                ans.push_back(st.top());
            }
            st.push(i);
        }
        
        return ans;
    }
    vector<int> nsr(vector<int>& a,int n){
        vector<int> ans;
        stack<int> st;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && a[st.top()]>=a[i]){
                st.pop();
            }
            if(st.empty()){
                ans.push_back(n);
            }
            else{
                ans.push_back(st.top());
            }
            st.push(i);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int> ansl=nsl(heights,n);
        vector<int> ansr=nsr(heights,n);
        for(int i:ansl){
            cout<<i<<' ' ;
        }
        cout<<endl;
        for(int i:ansr){
            cout<<i<<' ';
        }
        int max=0;
        for(int i=0;i<n;i++){
            int m=(ansr[i]-ansl[i]-1)*heights[i];
            if(max<m){
                max=m;
            }
        }
        return max;

    }

    int maximalRectangle(vector<vector<char>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int maxarea=0;
        vector<int> arr(m,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]=='1'){
                    arr[j]+=1;
                }
                else{
                    arr[j]=0;
                }
            }
            int area=largestRectangleArea(arr);
            maxarea=max(maxarea,area);
        }
        return maxarea;
    }
};