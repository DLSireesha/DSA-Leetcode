class Solution {
public:
    int nthUglyNumber(int n) {
        long m=1;
        set<long> s;
        s.insert(m);
        for(int i=0;i<n;i++){
            m=*s.begin();
            s.erase(m);
            s.insert(m*2);
            s.insert(m*3);
            s.insert(m*5);
        }
        return m;
    }
};