#include "solution.hpp"
#include <vector>
#include <unordered_set>

using namespace std;

bool contains_duplicate(const vector<int>& nums) {
    unordered_set<int> seen;
    for (size_t i = 0; i < nums.size(); ++i) {
        if (seen.count(nums.at(i))) return true;
        seen.insert(nums.at(i));
    }
    return false;
}