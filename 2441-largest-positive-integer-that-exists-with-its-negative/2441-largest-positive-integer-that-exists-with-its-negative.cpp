class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int n=-1;
        for(auto i:nums){
            for(auto j:nums){
                if(i==-j){
                    n=max(n,abs(i));
                }
            }
        }
        return n;
    }
};