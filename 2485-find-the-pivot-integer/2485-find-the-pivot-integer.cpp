class Solution {
public:
    int pivotInteger(int n) {
        if(n==1) return 1;
        int sum=(n*(n+1))/2;
        int x=sqrt(sum);
        if(x*x==sum) return x;
        else return -1;
    }
};