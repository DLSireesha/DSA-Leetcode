class Solution {
public:
    int pivotInteger(int n) {
        if(n==1) return 1;
        int sum=(n*(n+1))/2;
        int x=1;
        for(int i=2;i<=n;i++){
            sum=sum-i+1;
            x=x+i;
            if(sum==x){
                return i;
            }
        }
        return -1;
    }
};