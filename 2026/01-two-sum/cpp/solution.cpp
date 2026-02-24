#include "solution.hpp"
#include <iostream>
#include <vector> // list
#include <unordered_map> // dict 

std::vector<int> twoSum (const std::vector<int>& nums, int target) {

    std::unordered_map<int, int> seen;
    int difference;

    for (size_t i = 0; i < nums.size(); ++i) {
        difference = target - nums.at(i);

        if (seen.find(difference) != seen.end()) { // if difference exists in seen hashmap
            return {seen[difference], static_cast<int>(i)};
        }

        seen[nums.at(i)] = static_cast<int> (i);
    }

    return {};
}