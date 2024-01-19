class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<vector<int>> dp(m,vector<int>(n,0));
        for(int j=0;j<m;j++){
            dp[0][j]=matrix[0][j];
        }
        for(int i=1;i<n;i++){
            for(int j=0;j<m;j++){
                int l=1e9,r=1e9;
                int up=matrix[i][j]+dp[i-1][j];
                if(j-1>=0) l=matrix[i][j]+dp[i-1][j-1];
                if(j+1<n) r=matrix[i][j]+dp[i-1][j+1];
                dp[i][j]=min(up,min(l,r));
            }
        }
        int mini=dp[n-1][0];
        for(int j=1;j<m;j++){
            mini=min(mini,dp[n-1][j]);
        }
        return mini;
    }
};