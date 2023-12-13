class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int m=INT_MIN;
        sort(nums.begin(),nums.end());
        for(int i=nums.size()-1;i>0;i--){
            for(int j=i-1;j>=0;j--){
                int x=(nums[i]-1)*(nums[j]-1);
                m=max(m,x);
            }
        }
        return m;
    }
};