class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> cur(26),goal(26);
        for(char x:s1) goal[x-'a']++;
        for(int i=0;i<s2.size();i++){
            cur[s2[i]-'a']++;
            if(i>=s1.size()) cur[s2[i-s1.size()]-'a']--;
            if(goal==cur) return true;
        }
        return false;
    }
};