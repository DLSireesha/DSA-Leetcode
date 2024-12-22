class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0,high=nums.size()-1;
        if(target>nums[high]) return high+1;
        while(low<=high){
            int m=(low+high)/2;
            if(nums[m]==target){
                return m;
            }else if(nums[m]>target){
                high=m-1;
            }else{
                low=m+1;
            }
        }
        return low;
            
    }
};