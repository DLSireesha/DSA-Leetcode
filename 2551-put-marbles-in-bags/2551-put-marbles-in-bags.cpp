class Solution {
public:
    long long putMarbles(vector<int>& weights, int k) {
        long long l1=0,l2=0;
        k--;
        vector<long long> v;
        int n=weights.size();
        for(int i=1;i<n;i++){
            v.push_back(weights[i]+weights[i-1]);
        }
        sort(v.begin(),v.end(),greater<long long>());
        int n1=v.size();
        for(int i=0;i<k;i++){
            l2+=v[i];
            l1+=v[n1-i-1];
        }
        return (l2-l1);
    }
};