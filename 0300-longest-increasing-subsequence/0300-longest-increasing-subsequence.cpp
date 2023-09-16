class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<vector<int>> dp(nums.size()+1,vector<int>(nums.size()+1,0));
        for(int ind=nums.size()-1;ind>=0;ind--){
            for(int prev=ind-1;prev>=-1;prev--){
                int len=0+dp[ind+1][prev+1];
                if(prev==-1 || nums[ind]>nums[prev]){
                  len=max(len,1+dp[ind+1][ind+1]);
                 }
                dp[ind][prev+1]=len;
            }
        }
        return dp[0][-1+1];
    }
};