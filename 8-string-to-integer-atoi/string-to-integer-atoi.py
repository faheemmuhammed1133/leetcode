class Solution:
    def myAtoi(self, s: str) -> int:
        s = s.lstrip()
        if not s: return 0
        sign, i, res = -1 if s[0] == '-' else 1, 1 if s[0] in '+-' else 0, 0
        while i < len(s) and s[i].isdigit():
            res = res * 10 + int(s[i])
            i += 1
        res *= sign
        return max(-2**31, min(res, 2**31 - 1))
