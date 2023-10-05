class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int x=(n/3);
        //sort(nums.begin(),nums.end());
        vector<int> v;
        unordered_map<int,int> m;
        for(int y:nums){
            m[y]++;
        }
        for(auto it=m.begin();it!=m.end();it++){
            if(it->second>x){
                v.push_back(it->first);
            }
        }
        return v;
    }
};