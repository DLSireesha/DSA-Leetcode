class Solution {
public:
    void dfs(vector<int>& nums,int i,unordered_map<int,int>& m,int& ans,int k){
        if(i==nums.size()) ans++;
        else{
            if(!m[nums[i]-k] && !m[nums[i]+k]){
                m[nums[i]]++;
                dfs(nums,i+1,m,ans,k);
                m[nums[i]]--;
            }
            dfs(nums,i+1,m,ans,k);
        }
    }
    int beautifulSubsets(vector<int>& nums, int k) {
        int ans=0;
        unordered_map<int,int> m;
        dfs(nums,0,m,ans,k);
        return ans-1;
    }
};