class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {
        vector<int> v;
        vector<int> s;
        vector<int> e;
        for(auto nums:flowers){
            s.push_back(nums[0]);
            e.push_back(nums[1]);
        }
        sort(s.begin(),s.end());
        sort(e.begin(),e.end());
        for(int i=0;i<people.size();i++){
            int p=s.size()-(upper_bound(s.begin(),s.end(),people[i])-s.begin());
            int q=e.size()-(lower_bound(e.begin(),e.end(),people[i])-e.begin());
            v.push_back(q-p);
        }
        return v;
    }
};