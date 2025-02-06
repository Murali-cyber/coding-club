#include <vector>
#include <unordered_map>
#include <iostream>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
/*
         Enter code here
         */
        return 0;
    }
};

int main() {
    Solution solution;

    std::vector<int> nums1 = {2, 7, 11, 15};
    int target1 = 9;
    auto result1 = solution.twoSum(nums1, target1);
    std::cout << "[" << result1[0] << ", " << result1[1] << "]" << std::endl;  // Expected output: [0, 1]

    std::vector<int> nums2 = {3, 2, 4};
    int target2 = 6;
    auto result2 = solution.twoSum(nums2, target2);
    std::cout << "[" << result2[0] << ", " << result2[1] << "]" << std::endl;  // Expected output: [1, 2]

    std::vector<int> nums3 = {3, 3};
    int target3 = 6;
    auto result3 = solution.twoSum(nums3, target3);
    std::cout << "[" << result3[0] << ", " << result3[1] << "]" << std::endl;  // Expected output: [0, 1]

    return 0;
}