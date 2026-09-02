class Solution:
    def alternatingSum(self, nums: List[int]) -> int:
        n = len(nums)
        if(n>=2):
            for i in range(1,n,2):
                nums[i]=nums[i]*-1
            return sum(i for i in nums)
        else :
            return nums[0]