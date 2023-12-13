class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int m=INT_MIN;
        sort(nums.begin(),nums.end());
        int i=nums.size()-1;
        int j=nums.size()-2;
        while(i>0){
            while(j>=0){
                int x=(nums[i]-1)*(nums[j]-1);
                m=max(m,x);
                j--;
            }
            i--;
        }
        return m;
    }
};