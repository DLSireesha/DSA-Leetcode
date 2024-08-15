class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        //bool ans=false;
        int f=0,t=0;
        for(int i=0;i<bills.size();i++){
            if(bills[i]==5){
                f++;
            }else if(bills[i]==10){
                if(f>=0){
                    f--;
                    t++;
                }
                else return false;
            }else{
                if(f>0 && t>0){
                    f--,t--;
                }else if(f>2){
                    f-=3;
                }else return false;
            }
        }
        return true;
    }
};