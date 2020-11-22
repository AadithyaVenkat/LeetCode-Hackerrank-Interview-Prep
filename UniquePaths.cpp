class Solution {
public:
    int uniquePaths(int m, int n) {
        
        int i=0, j=0;
        int dp[m+1][n+1];
        
        //Base Case
        dp[0][0]=1;
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(i==0 && j==0)
                    continue;
                else if(i==0)
                    dp[i][j]=dp[i][j-1];
                else if(j==0)
                    dp[i][j]=dp[i-1][j];
                else
                    dp[i][j]=dp[i][j-1]+ dp[i-1][j];
                
            }
        }
        
        return dp[m-1][n-1];
    }
};
