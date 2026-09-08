class Solution:
    def mapWordWeights(self, words: List[str], weights: List[int]) -> str:
        # index of each char
        wordsIndexes = [[ord(ch.lower())-97 for ch in word] for word in words]
        # representative value of the char
        wordsIndexValue = [[weights[val] for val in words]for words in wordsIndexes]
        # sum of each row 
        word_sum = [sum(val for val in row) for row in wordsIndexValue]
        # Modulo + final char 
        final_index = [25-(val%26) for val in word_sum]
        ans = "".join(chr(val + 97) for val in final_index)
        return ans