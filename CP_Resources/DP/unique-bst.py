class Solution:
    def numTrees(self, n: int) -> int:
        dp = [[None] * 20 for _ in range(20)]
        def treeCount(l, r):
            if l >= r:
                return 1
            if dp[l][r] is not None:
                return dp[l][r]
            ans = 0
            for i in range(l, r + 1):
                ans += treeCount(l, i - 1)*treeCount(i + 1, r)
            dp[l][r] = ans
            return ans
        return treeCount(1, n)