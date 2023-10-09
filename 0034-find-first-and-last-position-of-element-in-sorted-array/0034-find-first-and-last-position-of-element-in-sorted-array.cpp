class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int s=-1,e=-1;
        for(int i=0;i<nums.size();i++){
            if(target==nums[i]){
                s=i;
                break;
            }
        }
        for(int i=nums.size()-1;i>=0;i--){
            if(target==nums[i]){
                e=i;
                break;
            }
        }
        return {s,e};
    }
};