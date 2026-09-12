class Solution:
    def maxDistinct(self, s: str) -> int:
        alph = [0] * 26
        for i in s:
           if alph[ord(i)-97]==0: alph[ord(i)-97] = 1 
        return alph.count(1)
