class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long sum=0;
        sort(happiness.begin(),happiness.end());
        reverse(happiness.begin(),happiness.end());
        for(int i=0;i<k;i++){
            if((happiness[i]-i)<0){
                continue;
            }else{
            sum+=happiness[i]-i;}
        }
        return sum;
    }
};