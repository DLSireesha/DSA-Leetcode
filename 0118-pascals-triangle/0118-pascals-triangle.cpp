class Solution {
public:
    vector<vector<int>> generate(int numRows) {
       vector<vector<int>> output(numRows);
        output[0]={1};
        for(int i=1;i<numRows;i++){
            output[i].resize(i+1,1);
            output[i][0]=1;
            for(int j=1;j<i;j++){
                output[i][j]=output[i-1][j-1]+output[i-1][j];
            }
            output[i][i]=1;
        }
        return output;
    }
};