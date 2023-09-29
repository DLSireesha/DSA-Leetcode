class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool x=true;
        bool y=true;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]<nums[i]){
                x=false;
            }
            else if(nums[i]<nums[i-1]){
                y=false;
            }
        }
        if(!x && !y){
            return false;
        }
        return true;
    }
};