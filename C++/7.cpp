#include <vector>
#include <algorithm>
#include <iostream>
    
class Solution {
public:
    std::vector<std::vector<int>> threeSum(std::vector<int>& nums) {
/*
         Enter code here
         */
        return 0;
    }
};

// Helper function to print the result
void printResult(const std::vector<std::vector<int>>& result) {
    std::cout << "[";
    for (const auto& triplet : result) {
        std::cout << "[" << triplet[0] << "," << triplet[1] << "," << triplet[2] << "]";
        if (&triplet != &result.back()) std::cout << ",";
    }
    std::cout << "]" << std::endl;
}

int main() {
    Solution solution;
    std::vector<int> nums1 = {-1,0,1,2,-1,-4};
    printResult(solution.threeSum(nums1));  // Output: [[-1,-1,2],[-1,0,1]]
    
    std::vector<int> nums2 = {0,1,1};
    printResult(solution.threeSum(nums2));  // Output: []
    
    std::vector<int> nums3 = {0,0,0};
    printResult(solution.threeSum(nums3));  // Output: [[0,0,0]]
    
    return 0;
}