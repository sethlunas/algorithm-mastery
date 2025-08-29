#include "solution.hpp"
#include <cstddef>

std::vector<int> product_except_self(const std::vector<int>& nums) {
    using std::vector;
    using std::size_t;
    size_t n = nums.size();
    vector<int> answer(n, 1); // Initialize vector 'answer' with the size n and all its values as 1
    
    // First pass
    for (size_t i = 1; i < n; ++i) {
        answer[i] = answer[i - 1] * nums[i - 1];
    }
    
    // Second pass
    int suffix = 1;
    for (size_t i = n; i-- > 0;) {
        answer[i] *= suffix;
        suffix *= nums[i];
    }

    return answer;
}