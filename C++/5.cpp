#include <iostream>

class Solution {
public:
    bool isPalindrome(int x) {
/*
         Enter code here
         */
        return 0;
    }
};

int main() {
    Solution solution;
    std::cout << std::boolalpha;  // To print true/false instead of 1/0
    std::cout << solution.isPalindrome(121) << std::endl;   // Output: true
    std::cout << solution.isPalindrome(-121) << std::endl;  // Output: false
    std::cout << solution.isPalindrome(10) << std::endl;    // Output: false
    return 0;
}