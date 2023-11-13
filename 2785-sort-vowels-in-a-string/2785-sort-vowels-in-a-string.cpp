class Solution {
public:
    string sortVowels(string s) {
        int n=s.length();
        vector<char> v;
        for(int i=0;i<n;i++){
            if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                v.push_back(s[i]);
                s[i]='@';
            }
        }
        sort(v.begin(),v.end(),greater<char>());
        string str="";
        for(int i=0;i<n;i++){
            if(s[i]=='@'){
                str+=v.back();
                v.pop_back();
            }
            else{
                str+=s[i];
            }
        }
        return str;
    }
};