# sample input = [1, 2, 3, 4, 5]

class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        ret = []
        self.dfs(nums, [], ret)
        return ret
    
    def dfs(self, nums, path, ret):
        if len(nums) == 0:
            ret.append(path)
        for swapIndex in range(len(nums)):
            nums[0], nums[swapIndex] = nums[swapIndex], nums[0]
            self.dfs(nums[1:], path + [nums[0]], ret)
            nums[0], nums[swapIndex] = nums[swapIndex], nums[0]