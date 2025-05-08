class Solution:
    def isPossibleToSplit(self, nums: List[int]) -> bool:
        frequency = Counter(nums)
        for num, count in frequency.items():
            if count > 2:
                return False
        
        return True