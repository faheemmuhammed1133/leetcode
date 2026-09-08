class Solution:

    # indexing to find vahracter
    def indexCharacter(self, words):
        wordsIndexes = [[ord(ch.lower())-97 for ch in word] for word in words]
        print(wordsIndexes)

        return wordsIndexes

    def replaceWordValue(self , wordsIndexes,weights):
        wordsIndexValue = []
        for row in wordsIndexes:
            arr = []
            for col in row:
                col = weights[col]
                arr.append(col)
            wordsIndexValue.append(arr)


        print(wordsIndexValue)
        return wordsIndexValue

    def mapWordWeights(self, words: List[str], weights: List[int]) -> str:
        wordsIndexes = self.indexCharacter( words)
        wordsIndexValue = self.replaceWordValue(wordsIndexes,weights)

        word_sum = [sum(val for val in row) for row in wordsIndexValue]
        print(word_sum)

        # Modulo + final char 
        final_index = [25-(val%26) for val in word_sum]
        ans = ""
        for val in final_index:
            ans+=chr(val+97)
        return ans