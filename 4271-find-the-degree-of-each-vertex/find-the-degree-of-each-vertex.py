class Solution:
    def findDegrees(self, matrix: list[list[int]]) -> list[int]:
        return [sum(val for val in row) for row in matrix]