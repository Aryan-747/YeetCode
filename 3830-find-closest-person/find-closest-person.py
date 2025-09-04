class Solution:
    def findClosest(self, x: int, y: int, z: int) -> int:

        d1 = abs(z-x)
        d2 = abs(z-y)

        if(d1<d2):
            return 1
        elif(d2<d1):
            return 2
        else:
            return 0
        