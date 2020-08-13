class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        n = str(n)
        product = 1
        sumNum = 0
        for digit in n:
            num = int(digit)
            product *= num
            sumNum += num
        return product - sumNum