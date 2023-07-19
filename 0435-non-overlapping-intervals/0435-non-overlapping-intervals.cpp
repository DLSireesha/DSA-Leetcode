class Solution {
public:
    static bool compare(vector<int>& v1,vector<int>& v2){
        return v1[1]<v2[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),compare);
        int p=0,r=0;
        for(int i=1;i<intervals.size();i++){
            if(intervals[p][1]>intervals[i][0]){
                r++;
            }
            else p=i;
        }
        return r;
    }
};