class Solution {
public:
    int lengthOfLastWord(string s) {
        int l=0,t=s.length()-1;
        while(t>=0 && s[t] == ' '){
            t--;
        }
        while(t>=0 && s[t] != ' '){
            l++;
            t--;
        }
        return l;
    }
};