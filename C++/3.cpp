#include <iostream>
#include <limits>

class Solution {
public:
    int reverse(int x) {
/*
         Enter code here
         */
        return 0;
    }
};

int main() {
    Solution solution;
    std::cout << solution.reverse(123) << std::endl;    // Output: 321
    std::cout << solution.reverse(-123) << std::endl;   // Output: -321
    std::cout << solution.reverse(120) << std::endl;    // Output: 21
    std::cout << solution.reverse(1534236469) << std::endl;  // Output: 0 (overflow case)
    return 0;
}