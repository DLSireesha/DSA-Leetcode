class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int prod=1;
        int c=0,p=0;
        if(k<=1) return 0;
        for(int i=0;i<nums.size();i++){
            prod*=nums[i];
            while(prod>=k){
                prod/=nums[p];
                p++;
            }
            c+=i-p+1;
        }
        return c;
    }
};