class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int,string>> ans;
        for(int i=0;i<heights.size();i++){
            ans.push_back({heights[i],names[i]});
        }
        sort(ans.rbegin(),ans.rend());
        vector<string> r;
        for(int i=0;i<heights.size();i++){
            r.push_back(ans[i].second);
        }
        return r;
    }
};