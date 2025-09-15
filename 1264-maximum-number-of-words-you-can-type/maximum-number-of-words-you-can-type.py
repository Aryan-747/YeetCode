class Solution:
    def canBeTypedWords(self, text: str, brokenLetters: str) -> int:

        words = text.split(' ')
        cnt = 0

        for x in words:
            check = True
            for y in brokenLetters:
                if(y in x):
                    check = False
                    break
            if(check):
                cnt+=1
        
        return cnt