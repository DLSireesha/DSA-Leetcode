class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> m;
        for(int x:arr){
            m[x]++;
        }
        set<int> s;
        for(auto& p:m){
            s.insert(p.second);
        }
        return s.size()==m.size();
    }
};