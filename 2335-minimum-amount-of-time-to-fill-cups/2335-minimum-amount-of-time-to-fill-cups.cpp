class Solution {
public:
    int fillCups(vector<int>& amount) {
        int sum=amount[0]+amount[1]+amount[2];
        sort(amount.begin(),amount.end());
        if(amount[2]>=amount[0]+amount[1]) return amount[2];
        else return sum/2+sum%2;
    }
};