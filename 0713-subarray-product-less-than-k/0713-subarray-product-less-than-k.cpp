class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int i=0,mul=1,ans=0;
        for(int j=0;j<nums.size();j++){
            mul*=nums[j];
            while(mul>=k && i<nums.size()){
                
                mul/=nums[i];
                i++;
            }
            if(mul<k){
                ans+=j-i+1;
            }
        }
        return ans;
    }
};