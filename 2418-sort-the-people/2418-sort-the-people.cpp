class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<int> h=heights;
        sort(h.begin(),h.end());
        vector<string> ans;
        for(int i=h.size()-1;i>=0;i--){
            for(int j=0;j<h.size();j++){
                if(h[i]==heights[j]){
                    ans.push_back(names[j]);
                }
            }
        }
        return ans;
    }
};