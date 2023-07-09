class Solution {
public:
    vector<int> smallestSubarrays(vector<int>& nums) {
        int n=nums.size();
        vector<queue<int>> loc(30);
        for(int i=0;i<n;i++){
            for(int b=0;b<30;b++){
                if(nums[i] & 1<<b) loc[b].push(i);
            }
        }
        vector<int> ans;
        for(int i=0;i<n;i++){
            int h=i;
            for(auto& q:loc){
                if(q.size() && i>q.front()) q.pop();
                if(q.size()) h=max(h,q.front());
            }
            ans.push_back(h-i+1);
        }
        return ans;
    }
};
//for video check binary magic channel