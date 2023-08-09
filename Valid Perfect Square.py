class Solution:
    def isPerfectSquare(self, num: int) -> bool:
        k=(int)(math.sqrt(num))
        return k*k==num
