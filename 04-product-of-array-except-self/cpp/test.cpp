#include "solution.hpp"
#include <iostream>
#include <tuple>

void test() {
    using std::vector;
    using std::tuple;
    using std::size_t;
    using std::cout;

    vector<tuple<vector<int>, vector<int>>> cases = {
        {{1, 2, 3, 4}, {24, 12, 8, 6}},
        {{1, 2, 0, 4}, {0, 0, 8, 0}},
        {{0, 1, 2, 3}, {6, 0, 0, 0}},
        {{2, -3, 4, -5}, {60, -40, 30, -24}},
        {{-1, -2, -3, -4}, {-24, -12, -8, -6}},
        {{5, 7}, {7, 5}},
        {{1, 1, 1, 1, 1}, {1, 1, 1, 1, 1}},
        {{2, 2, 2, 2}, {8, 8, 8, 8}},
        {{-30, -30, 30}, {-900, -900, 900}},
        {{-1, 1, 0, -3, 3}, {0, 0, 9, 0, 0}}
    };

    int passed = 0;
    size_t total = cases.size();

    for (size_t i = 0; i < total; ++i) {
        auto& [nums, expected] = cases[i];
        vector<int> got = product_except_self(nums);
        bool ok = (got == expected) ? true : false;
        cout << "Case " << i + 1 << (ok) ? ": Pass" : ": Fail";
        cout << "   input:  " << nums;

    }

}