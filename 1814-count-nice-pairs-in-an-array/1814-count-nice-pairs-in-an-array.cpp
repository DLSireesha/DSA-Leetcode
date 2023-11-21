class Solution {
public:
    int rev(int x){
        int sum=0;
        while(x>0){
            sum=sum*10+x%10;
            x=x/10;
        }
        return sum;
    }
    int countNicePairs(vector<int>& nums) {
        int count=0;
        int mod=1e9+7;
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            int y=nums[i]-rev(nums[i]);
            count=(count+m[y])%mod;
            m[y]++;
        }
        return count%mod;
    }
};