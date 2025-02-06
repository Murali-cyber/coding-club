class Solution:
    def longestCommonPrefix(self, strs: list[str]) -> str:
        '''
        enter code here
        '''

# Test the solution
solution = Solution()
print(solution.longestCommonPrefix(["flower", "flow", "flight"]))  # Output: "fl"
print(solution.longestCommonPrefix(["dog", "racecar", "car"]))     # Output: ""