#include "solution.hpp"
#include <cstddef>
#include <vector>

std::vector<int> productExceptSelf (const std::vector<int>& nums) {

    // Best practice to include inside function
    using std::vector; 
    using std::size_t;

    size_t n = nums.size();
    vector<int> result(n, 1); // initialize vector 'result' with size 'n' and all its values as 1

    // First pass (forward)
    int prefix = 1;
    for (size_t i = 0; i < n; ++i) {
        result[i] = prefix;
        prefix *= nums[i];
    }

    // Second pass (backward)
    int postfix = 1;
    for (size_t i = n; i-- > 0;) { // decrements after condition has been met
        result[i] *= postfix;
        postfix *= nums[i];
    }

    return result;
}