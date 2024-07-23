class Solution {
public:
    static bool cmp(pair<int,int>& a,pair<int,int>& b){
        return (a.second==b.second)?a.first>b.first:a.second<b.second;
    }
    vector<int> frequencySort(vector<int>& nums) {
        map<int,int> m;
        vector<pair<int,int>> m1;
        for(auto x:nums){
            m[x]++;
        }
        for(auto k:m){
            m1.push_back(k);
        }
        sort(m1.begin(),m1.end(),cmp);
        vector<int> v;
        for(auto y:m1){
            for(int i=0;i<y.second;i++){
                v.push_back(y.first);
            }
        }
        return v;
    }
};