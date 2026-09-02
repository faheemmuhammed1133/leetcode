class Solution:
    def findDegrees(self, matrix: list[list[int]]) -> list[int]:
        degree = []
        for i in matrix:
            val=0
            for j in i:
                val+=j
            degree.append(val)
        
        return degree