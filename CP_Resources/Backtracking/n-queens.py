# sample input: integer n = 5

class Solution:
    def solveNQueens(self, n: int) -> List[List[str]]:
        nums = [x for x in range(0, n)]
        ret = []
        self.dfs(nums, [], ret)
        return ret
        
    def dfs(self, nums, path, ret):
        if not nums:
            if self.verifyDiagonals(path, len(path)):
                temp = ["."*(path[i]) + 'Q' + '.'*(len(path) - path[i] - 1) for i in range(len(path))]                
                ret.append(temp)
        for i in range(len(nums)):
            self.dfs(nums[:i] + nums[i + 1:], path + [nums[i]], ret)
    
    
    def verifyDiagonals(self, board, n):
        for x in range(n - 1):
            for y in range(x + 1, n):
                if y - x == abs(board[y] - board[x]):
                    return False
        return True