class Solution:
    def reverse(self, x: int) -> int:
        

        '''

        enter code here
        '''

# Test the solution
solution = Solution()
print(solution.reverse(123))    # Output: 321
print(solution.reverse(-123))   # Output: -321
print(solution.reverse(120))    # Output: 21
print(solution.reverse(1534236469))  # Output: 0 (overflow case)