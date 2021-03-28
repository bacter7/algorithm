int minPathSum(int** grid, int gridSize, int* gridColSize){
    if (gridSize == 0) return 0;

    int dp[gridSize][*gridColSize];
    int i, j;
    memset(dp, 0, sizeof(int)*gridSize* (*gridColSize));

    dp[0][0] = grid[0][0];

    for (i = 1; i < gridSize; i++) {
        dp[i][0] = dp[i-1][0] + grid[i][0];
    }

    for (j = 1; j < *gridColSize; j++) {
        dp[0][j] = dp[0][j-1] + grid[0][j];
    }

    for (i = 1; i < gridSize; i++) {
        for (j = 1; j < *gridColSize; j++) {
            if (dp[i-1][j] < dp[i][j-1]) {
                dp[i][j] = dp[i-1][j] + grid[i][j];
            } else {
                dp[i][j] = dp[i][j-1] + grid[i][j];
            }
        }
    }
    return dp[i-1][j-1];


}