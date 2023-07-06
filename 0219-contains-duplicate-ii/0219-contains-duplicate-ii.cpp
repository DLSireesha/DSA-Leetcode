class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> v;
        for(int i=0;i<nums.size();i++){
            if(v.count(nums[i])){
                if(abs(i-v[nums[i]])<=k){
                    return true;
                }
            }
            v[nums[i]]=i;
        }
        return false;
    }
};