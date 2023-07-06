class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        int wind=sum;
        for(int i=k;i<nums.size();i++){
            wind+=nums[i]-nums[i-k];
            sum=max(sum,wind);
        }
        return sum/(double)k;
    }
};