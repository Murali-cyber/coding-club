#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

class Solution {
public:
    std::string longestCommonPrefix(std::vector<std::string>& strs) {
/*
         Enter code here
         */
        return 0;
    }
};

int main() {
    Solution solution;
    std::vector<std::string> strs1 = {"flower", "flow", "flight"};
    std::cout << solution.longestCommonPrefix(strs1) << std::endl;  // Output: "fl"
    
    std::vector<std::string> strs2 = {"dog", "racecar", "car"};
    std::cout << solution.longestCommonPrefix(strs2) << std::endl;  // Output: ""
    
    return 0;
}