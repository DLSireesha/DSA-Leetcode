class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        map<int,int> m;
        int count=arr[0];
        for(int i=1;i<=arr.size();i++){
            count=max(count,arr[i]);
            m[count]++;
            if(m[count]>=k){
                return count;
            }
        }
        return count;
    }
};