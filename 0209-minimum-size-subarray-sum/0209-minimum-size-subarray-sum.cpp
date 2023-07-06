class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int m=INT_MAX;
        int w=0;
        int k=0;
        for(int i=0;i<nums.size();i++){
            w+=nums[i];
            while(w>=target){
                m=min(m,i-k+1);
                w-=nums[k];
                k++;
            }
        }
        return m==INT_MAX?0:m;
    }
};