class Solution {
public:
    long long convert(long long& num){
        string s=to_string(num);
        int n=s.length();
        int l=(n-1)/2,r=n/2;
        while(l>=0) s[r++]=s[l--];
        return stoll(s);
    }
    long long nextPalindrome(long long num){
        long long left=0,right=num;
        long long ans=INT_MIN;
        while(left<=right){
            long long mid=(right-left)/2+left;
            long long pain=convert(mid);
            if(pain<num){
                ans=pain;
                left=mid+1;
            }else{right=mid-1;}
        }return ans;
    }
    long long previousPalindrome(long long num){
        long long left=num,right=1e18;
        long long ans=INT_MIN;
        while(left<=right){
            long long mid=(right-left)/2+left;
            long long pain=convert(mid);
            if(pain>num){
                ans=pain;
                right=mid-1;
            }else{left=mid+1;}
        }return ans;
    }
    string nearestPalindromic(string n) {
        int len=n.size();
        long long num=stoll(n);
        long long a=nextPalindrome(num);
        long long b=previousPalindrome(num);
        if(abs(a-num)<=abs(b-num)) return to_string(a);
        return to_string(b);
    }
};