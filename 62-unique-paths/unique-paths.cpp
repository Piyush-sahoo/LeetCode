class Solution {
public:
    int count(int i, int j, int m, int n,vector<vector<int>> &dp){
        if(i== m-1 && j == n-1) return 1;
        if(i>=m || j>=n) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        else return dp[i][j] =count(i+1, j, m, n, dp) + count(i, j+1, m, n, dp); 
    }
    int uniquePaths(int m, int n) {

        vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
        if(m==1 && n == 1)return 1;
        int ans = count(0, 0, m, n, dp);
        return dp[0][0];
        
        
    }
};