class Solution {
public:
    bool check(vector<int>& v,int m){
        for(auto i:v){
            if(m==i){
                return false;
            }
        }
        return true;
    }
    int distinctIntegers(int n) {
        if(n==0 || n==1) return 1;
        int count=0;
        vector<int> v;
        while(n>1){
            for(int i=n;i>=2;i--){
                if(n%i==1 && check(v,i)){
                    v.push_back(i);
                }
            }
            n=n-1;
        }
        return v.size()+1;
    }
};

//or
//class solution{
//public:
//int distinctIntegers(int n){
//return n-1;}
//};