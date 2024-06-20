class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        // stack<int> s;
        // s.push(nums1[0]);
        // int j=0;
        // vector<int> ans;
        // while(!s.empty()){
        //     int curr=s.top();
        //     int i=0;
        //     while(true){
        //         if(nums2[i]==curr){
        //             break;
        //         }
        //         i++;
        //     }
        //     s.pop();
        //     if(nums2[i]>curr){
        //         ans.push_back(nums2[i]);
        //     }
        //     if(s.empty() && j<nums1.size()){
        //         ans.push_back(-1);
        //         j++;
        //         s.push(nums1[j]);
        //     }
            
        // }
        // return ans;
        vector<int> ans(nums1.size(), -1);
        vector<int> res(nums2.size(), -1);
        stack<int> st;
        for(int i=nums2.size()-1; i>=0; i--)
        {
            while(!st.empty() && st.top()<nums2[i])
            {
                st.pop();
            }
            if(!st.empty())
            {
            res[i] = st.top();
            }
            st.push(nums2[i]);
        }
        for(int i=0; i<nums1.size(); i++)
        {
            for(int j=0; j<nums2.size(); j++)
            {
                if(nums1[i]==nums2[j])
                {
                    ans[i] = res[j];
                    break;
                }
            }
        }
        return ans;
        
    }
};