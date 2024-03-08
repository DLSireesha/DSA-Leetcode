class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int> m;
        for(int x:nums){
            m[x]++;
        }
        int maxf=0;
        for(auto y:m){
            maxf=max(maxf,y.second);
        }
        int ele=0;
        for(auto y:m){
            if(y.second==maxf){
                ele+=1;
            }
        }
        int total=ele*maxf;
        return total;
    }
};