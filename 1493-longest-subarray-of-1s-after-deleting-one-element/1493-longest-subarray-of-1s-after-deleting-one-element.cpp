class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int left=0,ans=0,z=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0) z++;
            while(z>1){
                if(nums[left]==0) z--;
                left++;
            }
            ans=max(ans,i-left+1-z);
        }
        return (ans==n)?ans-1:ans;
    }
};