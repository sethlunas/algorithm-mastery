#include "solution.hpp"
#include <iostream>
#include <vector>

void testTwoSum() {
    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    std::vector<int> result = twoSum(nums, target);
    if (result.size() == 2 && nums[result[0]] + nums[result[1]] == target) {
        std::cout << "Test passed!\n";
    } else {
        std::cout << "Test failed!\n";
    }
}

int main() {
    testTwoSum();
    return 0;
}