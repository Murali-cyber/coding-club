#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
#include <iostream>

class Solution {
public:
    int threeSumClosest(std::vector<int>& nums, int target) {
/*
         Enter code here
         */
        return 0;
    }
};

int main() {
    Solution solution;
    std::vector<int> nums1 = {-1,2,1,-4};
    std::cout << solution.threeSumClosest(nums1, 1) << std::endl;  // Output: 2
    
    std::vector<int> nums2 = {0,0,0};
    std::cout << solution.threeSumClosest(nums2, 1) << std::endl;  // Output: 0
    
    return 0;
}