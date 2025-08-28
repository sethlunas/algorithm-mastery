#include "solution.hpp"

std::vector<int> product_except_self(const std::vector<int>& nums) {
    using std::vector;
    size_t n = nums.size();
    vector<int> answer(n, 1); // Initialize vector 'answer' with the size n and all its values as 1
    
    // First pass
    for (size_t i = 1; i < n; ++i) {
        answer[i] = answer[i - 1] * nums[i - 1];
    }
    
    // Second pass
    int suffix = 1;
    for (size_t i = n - 1; i >= 0; --i) {
        suffix *= nums[i + 1];
        answer[i] *= suffix;
    }

    return {};
}