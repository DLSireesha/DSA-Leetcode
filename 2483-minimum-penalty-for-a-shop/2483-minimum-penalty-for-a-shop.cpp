class Solution {
public:
    int bestClosingTime(string customers) {
        int n=customers.size(),max_score=0,score=0,best=-1;
        for(int i=0;i<n;i++){
            score+=(customers[i]=='Y')?1:-1;
            if(score>max_score){
                max_score=score;
                best=i;
            }
        }
        return best+1;
    }
};