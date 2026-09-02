class Solution:

    def binary_search_iterative(self,arr, target):
        low = 0
        high = len(arr) - 1

        while low <= high:
            mid = low + (high - low) // 2
            if arr[mid] == target:
                return arr[mid]
            elif arr[mid] < target:
                low = mid + 1
            else:
                high = mid - 1
        return -1

    def recoverOrder(self, order: List[int], friends: List[int]) -> List[int]:
        res = []
        for i in order :
            if self.binary_search_iterative(friends,i) != -1:
                res.append(self.binary_search_iterative(friends,i))
        return res