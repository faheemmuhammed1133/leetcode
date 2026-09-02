class Solution:
    def reverse(self, n:int):
        rev=0
        while n>0:
            rev=rev*10
            rev += n%10
            n = n//10
        return rev
    def mirrorDistance(self, n: int) -> int:

        return abs(self.reverse(n)-n)