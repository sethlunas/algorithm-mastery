#include "solution.hpp"
#include <iostream>
#include <vector>


using namespace std;

void testTwoSum() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = twoSum(nums, target);
    if (result.size() == 2 && nums[result[0]] + nums[result[1]] == target) {
        cout << "Test passed!\n";
    } else {
        cout << "Test failed!\n";
    }
}

int main() {
    testTwoSum();
    return 0;
}