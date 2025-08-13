#include "solution.hpp"
#include <vector> // list in python
#include <unordered_map> // dict in python
using namespace std;

// Example: Two Sum
vector<int> twoSum(const vector<int>& nums, int target) {
    // TODO: Implement solution
    unordered_map<int, int> seen;
    int difference;
    for (size_t i = 0; i < nums.size(); ++i) {
        difference = target - nums.at(i);
        if (seen.count(difference)) {
            return {seen.at(difference), static_cast<int>(i)};
        }
        seen[nums.at(i)] = i;
    }
    return {};
}
