class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int t=0,f=0,ans=0,s=0,e=0;
        int n=answerKey.size();
        while(e<n){
            if(answerKey[e]=='T') t++;
            if(answerKey[e]=='F') f++;
            while(t>k && f>k){
                if(answerKey[s]=='T') t--;
                if(answerKey[s]=='F') f--;
                s++;
            }
            ans=max(ans,e-s+1);
            e++;
        }
        return ans;
    }
};