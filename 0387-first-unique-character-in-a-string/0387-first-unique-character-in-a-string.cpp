class Solution {
public:
    int firstUniqChar(string s) {
        map<char, int> hmap;
        for(char x:s){
            hmap[x]++;
        } 
        for(int i=0;i<s.size();i++){
            if(hmap[s[i]]==1){
                return i;
            }
        }
        return -1;
    }
};