class Solution {
public:
    int longestSubsequence(vector<int>& arr, int difference) {
        unordered_map<int,int> m;
        int mx=0;
        for(int i=0;i<arr.size();i++){
            m[arr[i]]=m[arr[i]-difference]+1;
            mx=max(mx,m[arr[i]]);
        }
        return mx;
    }
};