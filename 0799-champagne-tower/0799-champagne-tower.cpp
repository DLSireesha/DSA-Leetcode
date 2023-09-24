class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        vector<vector<double>> d(query_row+1,vector<double>(query_row+1,0.0));
        d[0][0]=poured;
        for(int i=0;i<query_row;i++){
            for(int j=0;j<=query_glass;j++){
                double r=(d[i][j]-1.0);
                if(r>0){
                d[i+1][j]+=r/2.0;
                d[i+1][j+1]+=r/2.0;
            }}
        }
        return min(1.0,d[query_row][query_glass]);
    }
};