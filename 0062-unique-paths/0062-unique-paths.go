func countPath(i, j, m, n int, dp [][]int) int {
    if i == m-1 && j == n-1 {
        return 1
    }
    if i >= m || j >= n {
        return 0
    }
    if dp[i][j] != -1 {
        return dp[i][j]
    }
    dp[i][j] = countPath(i+1, j, m, n, dp) + countPath(i, j+1, m, n, dp)
    return dp[i][j]
}

func uniquePaths(m, n int) int {
    dp := make([][]int, m)
    for i := range dp {
        dp[i] = make([]int, n)
        for j := range dp[i] {
            dp[i][j] = -1
        }
    }
    return countPath(0, 0, m, n, dp)
}
