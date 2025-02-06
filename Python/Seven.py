class Solution:
    def threeSum(self, nums: list[int]) -> list[list[int]]:
        '''
        enter code here
        '''

# Test the solution
solution = Solution()
print(solution.threeSum([-1,0,1,2,-1,-4]))  # Output: [[-1,-1,2],[-1,0,1]]
print(solution.threeSum([0,1,1]))           # Output: []
print(solution.threeSum([0,0,0]))           # Output: [[0,0,0]]