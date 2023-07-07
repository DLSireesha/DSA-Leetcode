class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        if(k==1) return 0;
        int left=0,right=k-1,ans=INT_MAX;
        while(right<nums.size()){
            ans=min(ans,nums[right]-nums[left]);
            left++;
            right++;
        }
        return ans;
    }
};