class Solution:

    def binary_search_bisect(self,arr, target):
        i = bisect.bisect_left(arr, target)
        if i < len(arr) and arr[i] == target:
            return arr[i]
        return -1

    def recoverOrder(self, order: List[int], friends: List[int]) -> List[int]:
        res = []
        for i in order :
            if self.binary_search_bisect(friends,i) != -1:
                res.append(self.binary_search_bisect(friends,i))
        return res