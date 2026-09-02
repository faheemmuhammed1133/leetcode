class Solution:
    def recoverOrder(self, order: List[int], friends: List[int]) -> List[int]:
        res = []
        for i in order :
            for j in friends:
                if i ==j:
                    res.append(i)
        return res